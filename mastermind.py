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
    print code
    print guess
    code_list = list(code)
    guess_list = list(guess)
    black_peg = 0
    white_peg = 0
    for i in range(len(code_list)):
        if code_list[i] == guess_list[i]:
            black_peg += 1
            code_list[i] = 'X'
            guess_list[i] = 'X'
    for i in range(len(code_list)):
        if code_list[i] != 'X' and guess_list[i] != 'X':
            if code_list[i] in guess_list:
                white_peg += 1
                code_list[i] = 'X'
                guess_list[i] = 'X'
    print black_peg
    print white_peg
