import re, argparse, os

# Despite being named "clean" this file is a mess and was cobbled together over night. Pretend you never saw it

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

    # I tried to fight the regex to get the "?" and failed
    question_mark = ["equal", "member", "string", "hash-has-key", "null", "even", "odd", "eq"]
    for x in range(len(used_functions)):
        if used_functions[x] in question_mark:
            # used_functions.append(used_functions[x] + "?")
            used_functions[x] = used_functions[x] + "?"
    used_functions = used_functions + ['+', '-', '/', 'brouhaha_main']
    used_functions = list(set(used_functions))
    print(f"These are the functions I found: {used_functions}")
    return used_functions

def check_slog(slog_path, analyze_slog_path, used_functions):
    with open(slog_path, 'r') as f:
        lines = f.readlines()
    with open(analyze_slog_path, 'r') as f:
        analyze = f.readlines()

    ignore = (
        ';',
    )

    updated_lines = []
    for line in analyze:
        updated_lines.append(line)
    for line in lines:
        stripped_line = line.strip()

        if stripped_line.startswith(';'):
            continue

        if stripped_line.startswith('(store (addr '):
            if any(stripped_line.startswith(f'(store (addr "{func}"') for func in used_functions):
                updated_lines.append(line)
            elif stripped_line.startswith('(store (addr "brouhaha_main") '):
                updated_lines.append(line)
        
    # updated_lines = updated_lines[:-1]
    
    nested_env_set = "(empty)"
    for func in reversed(used_functions):
        nested_env_set = f'(env-set {nested_env_set} "{func}" (addr "{func}"))'
    updated_lines.append(f'(top-level-env {nested_env_set})')
    
    return updated_lines

def main():
    parser = argparse.ArgumentParser(description='Find functions in prelude used by the program.')
    parser.add_argument('program_path', help='The path to the program file.')
    args = parser.parse_args()

    slog_path = f"../brouhaha/tests/{args.program_path}/output/{args.program_path}.slog"
    analyze_slog_path = f"../brouhaha/analyze.slog"
    program_path = f"../brouhaha/tests/{args.program_path}/{args.program_path}.haha"
    out_path = f"../brouhaha/tests/{args.program_path}/output/slog-out"

    print(f"\n\nI'm going to do a sanity check so no weird errors pop up\n")
    os.system(f"cd ../brouhaha && racket test.rkt {args.program_path} && cd ../slog")
    # os.system(f"racket test.rkt {args.program_path}")

    used_functions = find_used_functions('../brouhaha/prelude.haha', program_path)
    updated_lines = check_slog(slog_path, analyze_slog_path, used_functions)

    with open(slog_path, 'w') as f:
        f.writelines(updated_lines)
    
    print(f"\n\nLooks like everything went well. I'm going to runslog for you now, the slog file is \n\n{slog_path} \n\nand I'll output to \n\n{out_path}\n\n")
    os.system(f"./runslog -R -ov {slog_path} {out_path}")

def debug():
    program_path = "divison"
    slog_path = f"../brouhaha/tests/{program_path}/output/{program_path}.slog"
    analyze_slog_path = f"../brouhaha/analyze.slog"
    prgram_path = f"../brouhaha/tests/{program_path}/{program_path}.haha"
    out_path = f"../brouhaha/tests/{program_path}/output/slog-out"

    print(f"\n\nI'm going to do a sanity check so no weird errors pop up\n")
    # os.system(f"cd ../brouhaha && racket test.rkt {args.program_path} && cd ../slog")
    os.system(f"racket test.rkt {program_path}")

    used_functions = find_used_functions('../brouhaha/prelude.haha', prgram_path)
    updated_lines = check_slog(slog_path, analyze_slog_path, used_functions)

    with open(slog_path, 'w') as f:
        f.writelines(updated_lines)

if __name__ == "__main__":
    main()
    # debug()
