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
    code = raw_input()
    guess = raw_input()
    code_dict = collections.Counter(code)
    guess_dict = collections.Counter(guess)
    black_pegs = 0
    white_pegs = 0
    for i in xrange(4):
        if code[i] == guess[i]:
            black_pegs += 1
    for i in xrange(6):
        if chr(i + 65) in code_dict and chr(i + 65) in guess_dict:
            white_pegs += min(code_dict[chr(i + 65)], guess_dict[chr(i + 65)])
    print(black_pegs)
    print white_pegs - black_pegs
