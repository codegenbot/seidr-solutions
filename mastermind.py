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
04
input:
BOYG
GYOB
output:
40
input:
WYYW
BBOG
output:
00
input:
GGGB
BGGG
output:
22
input:
BBBB
OOOO
output:
00
"""
if __name__ == '__main__':
    code = input()
    guess = input()
    code_dict = {}
    guess_dict = {}
    for i in range(len(code)):
        if code[i] in code_dict:
            code_dict[code[i]] += 1
        else:
            code_dict[code[i]] = 1
        if guess[i] in guess_dict:
            guess_dict[guess[i]] += 1
        else:
            guess_dict[guess[i]] = 1
    black_peg = 0
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_peg += 1
    white_peg = 0
    for key in code_dict:
        if key in guess_dict:
            white_peg += min(code_dict[key], guess_dict[key])
    white_peg -= black_peg
    print(str(black_peg) + str(white_peg))
