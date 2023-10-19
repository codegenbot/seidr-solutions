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

def get_black_white_pegs(code, guess):
    code_set = set(code)
    black_pegs = 0
    white_pegs = 0
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
            code_set.remove(code[i])
            guess = guess[:i] + ' ' + guess[i+1:]
    for i in range(len(code)):
        if guess[i] in code_set:
            white_pegs += 1
            code_set.remove(guess[i])
    return black_pegs, white_pegs

if __name__ == '__main__':
