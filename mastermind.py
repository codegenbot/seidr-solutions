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
    code = sys.stdin.readline().strip()
    guess = sys.stdin.readline().strip()
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
    white = 0
    black = 0
    for key in code_dict:
        if key in guess_dict:
            white += min(code_dict[key], guess_dict[key])
    for i in range(len(code)):
        if code[i] == guess[i]:
            black += 1
    print(black, white - black)
