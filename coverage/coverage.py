#!/usr/bin/env python3
from pathlib import Path
import subprocess
import re

# Gets the list of tests
# i/p : None
# O/p : return a list of test names in the tests folder


def get_tests():
    testing_dir = "./tests"
    tests = []
    for directory in Path(testing_dir).iterdir():
        if directory.is_dir():
            tests.append(directory.name)
    return tests

# Gets the line number covered by matching over the stdout from the command passed to the function
# i/p : a string that is a command to run
# o/p : matches the pattern over the stdout from the function and return the list of the linenumbers found.


def get_lines_covered(command):
    process = subprocess.Popen(command, shell=True, stdout=subprocess.PIPE)
    output = process.communicate()[0].decode("utf-8")
    match = list(set(re.findall(":([0-9]*)]", output, re.MULTILINE)))
    match = [int(x) for x in match]
    match.sort()
    return match

# gets the list of tests from the get_tests and then gets the line numbers for each test and creates a dictionary {test_name: [lines touched]}
# i/p : None
# o/p : a dictionary; {test_name : [lines touched]}


def run_tests():
    tests = get_tests()
    # tests = ["easy"]
    lines_covered_by_each_test = {}
    for test in tests:
        cmd_string = "racket test.rkt "+test
        lines_covered_by_each_test[test] = get_lines_covered(cmd_string)
    return lines_covered_by_each_test

# gets the lines covered across the tests
# i/p : lines_covered_by_each_test dictionary and the lines_to_cover dictionary
# return the list of lines covered across tests.


def get_all_lines_covered(lines_covered_by_each_test, lines_to_cover):
    lines_covered = []
    for k in lines_covered_by_each_test.keys():
        lines_covered.extend(lines_covered_by_each_test[k])
    lines_covered = list(set(lines_covered))
    lines_covered.sort()
    return lines_covered


def get_lines_to_cover():
    compile_rkt_path = "./compile.rkt"
    lines_to_cover = []
    count = 0
    with open(Path(compile_rkt_path)) as compile_rkt:
        for line in compile_rkt.readlines():
            count+=1
            if "(coverage" in line:
                lines_to_cover.append(count)
    print(lines_to_cover)


def to_main():
    lines_covered_by_each_test = run_tests()
    print("Number of tests ran: ", len(lines_covered_by_each_test))
    # print(lines_covered_by_each_test)

    lines_to_cover = {"desugar": [40, 41, 42, 45, 46, 47, 48, 49, 51, 52, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 72, 76, 80],
                    "alphatize": [91, 95, 99, 100, 101, 103, 104, 105, 106, 107, 108, 113, 117],
                    "anf_convert": [135, 141, 142, 145, 152, 153, 157, 158, 160, 161, 162, 163, 164, 166, 168, 169, 170, 171, 172],
                    "cps_convert": [179, 183, 184, 185, 188, 191, 192, 195, 198, 200, 202, 203, 204, 206, 208, 209, 212, 213, 219, 225],
                    "closure_conv": [231, 235, 242, 247, 261, 277, 283, 284, 285, 294]
                    }
    for k in lines_to_cover.keys():
        lines_to_cover[k] = [val-3 for val in lines_to_cover[k]]

    val = get_all_lines_covered(lines_covered_by_each_test, lines_to_cover)
    val.sort()
    print(val)
    untouched_lines = {}
    for stage in lines_to_cover.keys():
        untouched_lines[stage] = lines_to_cover[stage]
        for k in val:
            if k in lines_to_cover[stage]:
                untouched_lines[stage].remove(k)
    print(untouched_lines)

    print(lines_covered_by_each_test)

get_lines_to_cover()


