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
    code = input()
    guess = input()
    result = [0,0]
    code_dict = collections.defaultdict(int)
    guess_dict = collections.defaultdict(int)
    for i in range(len(code)):
        if code[i] == guess[i]:
            result[1] += 1
        else:
            code_dict[code[i]] += 1
            guess_dict[guess[i]] += 1
    for i in code_dict.keys():
        if i in guess_dict.keys():
            result[0] += min(code_dict[i], guess_dict[i])
    print(result[0], result[1])
