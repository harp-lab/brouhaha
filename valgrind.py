#!/usr/bin/python3
#####################################################
#############  LEAVE CODE BELOW  ALONE  #############
# Include base directory into path
import os, sys
sys.path.append(os.path.abspath(os.path.join(os.path.dirname( __file__ ), '..', '..')))

# Import tester
from tester import failtest, passtest, assertequals, runcmd, preparefile, runcmdsafe
#############    END UNTOUCHABLE CODE   #############
#####################################################

###################################
# Write your testing script below #
###################################
import shutil

# prepare files
preparefile('./test.cpp')
preparefile('./input')

# run test
b_stdout, b_stderr, b_exitcode = runcmdsafe('clang++ test.cpp -o test')
if b_exitcode == 0:
    b_stdout, b_stderr, b_exitcode = runcmdsafe('cat input | ./test >> output')


# Convert stdout bytes to utf-8
stdout = ""
stderr = ""
try:
    stdout = b_stdout.decode('utf-8')
    stderr = b_stderr.decode('utf-8')
except:
    pass


try:
    with open('answer', 'r') as file1, open('output', 'r') as file2:
        answer = file1.read().strip()
        output = file2.read().strip()

    # Run Valgrind
    b_stdout, b_stderr, b_exitcode = runcmdsafe('cat input | valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind.txt ./test')
    valgrind = '...'
    with open('valgrind.txt', 'r') as file3:
        valgrind = file3.read().strip()
    os.remove('valgrind.txt')

    # Delete output 
    os.remove('output')
    os.remove('test')
    #shutil.rmtree('p0') # .class build folder (folder = package name)

    # Built in tester.py function assertequals(expected, actual, info='')
    # If True, passes. If false, fails and gives expected != actual and and specified info.
    # parameters: 
    # - expected(required): the answer that was expected
    # - actual(required): the output from the user's code
    # - info(optional): any additional info you want printed if it fails

    if 'no leaks are possible' in valgrind:
      assertequals(answer, output, stdout+"\n"+stderr)
    else:
      failtest('Memory leaks detected')
    
except FileNotFoundError: 
    os.remove('output')
    os.remove('test')
    failtest(stdout+"\n"+stderr)
