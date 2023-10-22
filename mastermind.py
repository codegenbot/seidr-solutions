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
    l = []
    for i in range(4):
        l.append(input())
    code = l[0]
    guess = l[1]
    code_dict = dict()
    for i in range(len(code)):
        if code[i] not in code_dict:
            code_dict[code[i]] = 1
        else:
            code_dict[code[i]] += 1
    w_pegs = 0
    b_pegs = 0
    for i in range(len(guess)):
        if guess[i] == code[i]:
            b_pegs += 1
        if guess[i] in code_dict and code_dict[guess[i]] > 0:
            w_pegs += 1
            code_dict[guess[i]] -= 1
    print(b_pegs)
    print(w_pegs)
