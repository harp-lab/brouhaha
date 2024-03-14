import argparse
import subprocess
import time
import os

def run_command(command,iterations, work_dir=None, show_output=False, message_text="command"):
    start_times = []
    try:
        # Execute the command in the specified working directory
        for _ in range(iterations):
            start_time = time.time()
            process = subprocess.run(command, cwd=work_dir, capture_output=not show_output, text=True, check=True)
            if show_output:
                print(process.stdout)
            end_time = time.time()
            start_times.append(end_time - start_time)
    except subprocess.TimeoutExpired:
        print(f"Command {' '.join(command)} timed out.")
    except subprocess.CalledProcessError as e:
        print(f"Command {' '.join(command)} failed with error: {e}")
    else:
        average_time = sum(start_times) / len(start_times)
        print(f"{message_text} average over {iterations} iterations: {average_time:.2f} seconds.")

def read_iterations(file_path):
    try:
        with open(file_path, 'r') as file:
            return int(file.read().strip())
    except FileNotFoundError:
        print(f"File {file_path} not found. Defaulting to 1 iteration.")
        return 1
    except ValueError:
        print("Error reading iterations. Please ensure the file contains an integer.")
        return 1

def compile_and_run_brouhaha(benchmark_name, iterations, show_output):
    # Adjust paths as necessary
    gen_test_files_command = ['racket', 'test.rkt', '-t', benchmark_name]
    subprocess.run(gen_test_files_command, cwd=None, capture_output=not show_output, text=True, check=True)
    cmake_configure = ['cmake', '-S', '.','-B','./build']
    subprocess.run(cmake_configure, cwd=None, capture_output=not show_output,text=True, check=True)
    cmake_build_process = ['cmake', '--build', './build', '--target', f'{benchmark_name}_exec']
    subprocess.run(cmake_build_process, cwd=None, capture_output=not show_output, text=True, check=True)
    executable_path = f'./build/tests/{benchmark_name}/{benchmark_name}_exec'
    if os.path.exists(executable_path):
        run_command([executable_path],iterations, work_dir=None, show_output=show_output, message_text=f"{benchmark_name} on brouhaha")
    else:
        print(f"Executable {executable_path} not found.")

def main():
    parser = argparse.ArgumentParser(description="Compile and run benchmarks in Racket, Chicken Scheme, and Brouhaha.")
    parser.add_argument('benchmark_name', help='The name of the benchmark to run')
    parser.add_argument('--show-output', action='store_true', help='Whether to show output of each command')
    print("after the arguments") 
    args = parser.parse_args()
    benchmark_name = args.benchmark_name

    # Read iterations from file
    iterations_path = os.path.join(os.getcwd(), 'tests',benchmark_name,'iteration.txt')
    iterations = read_iterations(iterations_path)

    # Run for Brouhaha
    compile_and_run_brouhaha(benchmark_name, iterations, args.show_output)

    # Run for Chicken Scheme
    chicken_script_path = os.path.join(os.getcwd(), 'tests',benchmark_name,benchmark_name+'.scm')
    if os.path.exists(chicken_script_path):
        chicken_compile = ['csc', '-o', f'{benchmark_name}_exec', chicken_script_path]
        subprocess.run(chicken_compile, cwd=None, capture_output=not args.show_output,text=True, check=True)
        run_command([f'./{benchmark_name}_exec'],iterations, show_output=args.show_output,message_text=f"{benchmark_name} on chicken")

    # Run for Racket
    racket_script_path = os.path.join(os.getcwd(), 'tests',benchmark_name,benchmark_name+'.rkt')
    if os.path.exists(racket_script_path):
        run_command(['racket', racket_script_path],iterations, show_output=args.show_output, message_text=f"{benchmark_name} on racket")
if __name__ == "__main__":
    main()

