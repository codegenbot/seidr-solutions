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
    a = input()
    b = input()
    dic = {'B': 0, 'G': 0, 'O': 0, 'P': 0, 'R': 0, 'Y': 0}
    for i in a:
        dic[i] += 1
    black = 0
    for i in range(len(a)):
        if a[i] == b[i]:
            black += 1
    white = 0
    for j in b:
        if dic[j] > 0:
            white += 1
            dic[j] -= 1
    print(black, white - black)
