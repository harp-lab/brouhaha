import re
import argparse

def extract_prelude_funcs(file_path):
    with open(file_path, 'r') as f:
        content = f.read()
    
    pattern = r'\(define\s+\(([a-zA-Z0-9_\->]+).*?\)'
    prelude_funcs = re.findall(pattern, content)

    call_names = ['call', 'brouhaha_main', 'helper', 'eq-test', 'fact', 'call-foldl', 'interleave-direct', 'power', 'transitive-closure', 'f' 'add-edge', 'iter-to-fixpoint', 'g', 'yes']

    return prelude_funcs + call_names

def extract_program_calls(file_path):
    with open(file_path, 'r') as f:
        content = f.read()
    
    pattern = r'\(([a-zA-Z0-9_\->]+)'
    program_calls = re.findall(pattern, content)
    program_calls = [call for call in program_calls if call != 'define']
    return program_calls

def find_used_functions(prelude_path, program_path):
    prelude_funcs = extract_prelude_funcs(prelude_path)
    program_calls = extract_program_calls(program_path)
    
    used_functions = [call for call in program_calls if call in prelude_funcs]

    # This is super hacky but it's 3 am and i'm tired
    some_big_hardcoded_dict = {
    	"even?": "'equal?', 'modulo'",
    	"odd?": "'equal?', 'modulo'",
    	"member?": "'null?', 'equal?', 'car', 'cdr'",
    	"foldl": "'null?', 'car', 'cdr'",
    	"reverse": "'reverse-helper', 'null?', 'car', 'cons', 'cdr', 'list'",
    	"take": "'take-helper', 'reverse', 'reverse-helper', 'null?', 'car', 'cons', 'cdr', 'list', '+', '=', '-'",
    	"length": "'null?', 'cdr', '+'",
    	"map": "'null?', 'list', 'cons', 'car', 'cdr'",
    	"filter": "'null?', 'list', 'car', 'cons', 'cdr'",
    	"drop": "'=', 'cdr', '-'",
    	"foldr": "'null?', 'car', 'cdr'",
    	"append": "'null?', 'cons', 'car', 'cdr'"
	}

    for key, value in some_big_hardcoded_dict.items():
        if key in used_functions:
            value = value.replace("'", "")
            ls = value.split(", ")
            used_functions = used_functions + ls

    used_functions = list(set(used_functions))
    print(used_functions)
    return used_functions

def check_slog(slog_path, used_functions):
    with open(slog_path, 'r') as f:
        lines = f.readlines()

    updated_lines = []
    for line in lines:
        if line.strip().startswith(';'): 
            continue
        for func in used_functions:
            if line.strip().startswith(f'(store (addr "{func}"') or not line.strip().startswith(';') and not line.strip().startswith('(store (addr '):
                updated_lines.append(line)
                break
    
    # Remove the original 'top-level-env' structure
    updated_lines = updated_lines[:-1]
    
    # Create a new 'top-level-env' structure based on 'used_functions'
    nested_env_set = "(empty)"
    for func in reversed(used_functions):
        nested_env_set = f'(env-set {nested_env_set} "{func}" (addr "{func}"))'
    updated_lines.append(f'(top-level-env {nested_env_set})')
    
    return updated_lines


# def check_slog(slog_path, used_functions):
#     with open(slog_path, 'r') as f:
#         lines = f.readlines()
    
#     updated_lines = []
#     for line in lines:
#         if line.strip().startswith(';'): 
#             continue
#         for func in used_functions:
#             if line.strip().startswith(f'(store (addr "{func}"') or not line.strip().startswith(';') and not line.strip().startswith('(store (addr '):
#                 updated_lines.append(line)
#                 break
    
#     return updated_lines

def main():
    parser = argparse.ArgumentParser(description='Find functions in prelude used by the program.')
    parser.add_argument('program_path', help='The path to the program file.')
    args = parser.parse_args()

    slog_path = f"../brouhaha/tests/{args.program_path}/output/{args.program_path}.slog"
    program_path = f"../brouhaha/tests/{args.program_path}/{args.program_path}.haha"
    used_functions = find_used_functions('../brouhaha/prelude.haha', program_path)
    updated_lines = check_slog(slog_path, used_functions)

    with open(slog_path, 'w') as f:
        f.writelines(updated_lines)

if __name__ == "__main__":
    main()
