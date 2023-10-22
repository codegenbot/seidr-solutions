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

input:
RRRR
RGGG
output:
0
3

input:
RRRR
GGGR
output:
0
2

input:
RRRR
RRGG
output:
0
2


"""
def get_colors_number(str1, str2):
    a = 0
    b = 0
    for i in range(4):
        if str1[i] == str2[i]:
            a += 1
    for i in range(4):
        if str1[i] in str2 and str1[i] != str2[i]:
            b += 1
    return a,b


if __name__ == '__main__':
