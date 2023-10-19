import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
"""
Based on the board game Mastermind. Given a Mastermind code and a guess, each of which are 4-character strings consisting of 6 possible characters, return the number of white pegs (correct color, wrong place) and black pegs (correct color, correct place) the codemaster should give as a clue.
For example,
input:
RRRR
RRRR
output:
0
4
input:
BOYG
GYOB
output:
4
0
input:
WYYW
BBOG
output:
0
0
input:
GGGB
BGGG
output:
2
2
input:
BBBB
OOOO
output:
0
0
"""
if __name__ == '__main__':
    if len(sys.argv) < 2:
        print 'not enough argv'
        sys.exit()
    if len(sys.argv) > 2:
        print 'too many argv'
        sys.exit()
    if len(sys.argv[1]) != 8:
        print 'invalid input'
        sys.exit()
    if re.search(r'[^RGBYOW]', sys.argv[1]):
        print 'invalid input'
        sys.exit()
    code = sys.argv[1][:4]
    guess = sys.argv[1][4:]
    code_arr = np.array(list(code))
    guess_arr = np.array(list(guess))
    code_dict = collections.Counter(code_arr)
    guess_dict = collections.Counter(guess_arr)
    black_pegs = 0
    for key in guess_dict:
        if key in code_dict:
            black_pegs += min(code_dict[key], guess_dict[key])
    white_pegs = 0
    for key in guess_dict:
        if key in code_dict:
            white_pegs += min(code_dict[key], guess_dict[key])
    print white_pegs, black_pegs
