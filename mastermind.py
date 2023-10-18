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
Based on the board game Mastermind. Given a Mastermind code and a guess, each of which are 4-character strings consisting of 6 possible characters,
return the number of white pegs (correct color, wrong place) and black pegs (correct color, correct place) the codemaster should give as a clue.
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
    code = input()
    guess = input()
    code_dict = {}
    for i in code:
        if i not in code_dict:
            code_dict[i] = 1
        else:
            code_dict[i] += 1
    guess_dict = {}
    for i in guess:
        if i not in guess_dict:
            guess_dict[i] = 1
        else:
            guess_dict[i] += 1
    white_count = 0
    for i in guess_dict:
        if i in code_dict:
            white_count += min(guess_dict[i], code_dict[i])
    print(white_count, end='')
    print('\n', 4 - white_count, end='')
