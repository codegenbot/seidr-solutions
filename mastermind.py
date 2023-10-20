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
    a = sys.stdin.readline().strip()
    b = sys.stdin.readline().strip()
    white = 0
    black = 0
    for i in range(len(a)):
        if a[i] == b[i]:
            black += 1
            a = a[:i]+'*'+a[i+1:]
            b = b[:i]+'*'+b[i+1:]
    for i in range(len(a)):
        if a[i] in b:
            white += 1
            b = b.replace(a[i], '*', 1)
    print white, black
