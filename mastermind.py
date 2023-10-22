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
    line = raw_input()
    l = len(line)
    b = 0
    w = 0
    for i in range(0, l):
        if line[i] == 'G':
            b += 1
    if b == 0:
        print w
        print b
    else:
        for i in range(0, l):
            for j in range(i + 1, l):
                if line[i] == line[j]:
                    w += 1
                    b -= 1
                    break
        print w
        print b
