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
    line1 = input().strip()
    line2 = input().strip()
    code = {}
    for i in range(4):
        if line1[i] not in code:
            code[line1[i]] = 1
        else:
            code[line1[i]] += 1
    guess = {}
    for i in range(4):
        if line2[i] not in guess:
            guess[line2[i]] = 1
        else:
            guess[line2[i]] += 1
    white = 0
    for i in code:
        if i in guess:
            white += min(code[i], guess[i])
    black = 0
    for i in range(4):
        if line1[i] == line2[i]:
            black += 1
    white -= black
    print(black)
    print(white)
