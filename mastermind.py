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
    code = input('code: ')
    guess = input('guess: ')
    code_dict = {}
    guess_dict = {}
    for item in code:
        code_dict[item] = code_dict.get(item, 0) + 1
    for item in guess:
        guess_dict[item] = guess_dict.get(item, 0) + 1
    black = 0
    white = 0
    for item in code_dict:
        black += min(code_dict[item], guess_dict.get(item, 0))
    for item in guess_dict:
        white += min(code_dict.get(item, 0), guess_dict[item])
    print(white - black)
    print(black)
