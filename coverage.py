# This should run each test in tests folder
# Take the output, look for line numbers in the p-dbg
# and make a {testname: [linenumbers touched]}
from pathlib import Path
import subprocess
import re


# Think about getting the list of tests from the name of directories in tests directory.
def get_tests():
    testing_dir = "./tests"
    tests = []
    for directory in Path(testing_dir).iterdir():
        if directory.is_dir():
            tests.append(directory.name)
    return tests


def get_lines_covered(command):
    process = subprocess.Popen(command, shell=True, stdout=subprocess.PIPE)
    output = process.communicate()[0].decode("utf-8")
    match = list(set(re.findall(":([0-9]*)]", output, re.MULTILINE)))
    match.sort()
    return match


def run_tests():
    tests = get_tests()
    # tests = ["easy"]
    test_stats ={}
    for test in tests:
        cmd_string = "racket test.rkt "+test
        test_stats[test] = get_lines_covered(cmd_string)
    return test_stats

def stats(test_stats, lines_to_cover):
    lines_covered = list(set([test_stats[k] for k in test_stats.keys()]))
    return lines_covered



# think about generating some stats
# which test covers most lines in the compile.rkt
# which lines are covered least in the testing


if __name__ == "__main__":
    lines_to_cover= {"Desugar" : [40, 41, 42, 45, 46, 47, 48, 49, 51, 52, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 72, 76, 80]}
    test_stats = run_tests()
    print("Number of tests ran: ",len(test_stats))
    print(test_stats)

