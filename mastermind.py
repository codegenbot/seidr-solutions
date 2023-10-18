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
    code = sys.stdin.readline().strip()
    guess = sys.stdin.readline().strip()
    white_pegs = 0
    black_pegs = 0
    black_pegs_set = set() # make sure GGGB\nBGGG -> 2\n2
    code_dict = collections.defaultdict(int)
    for c in code:
        code_dict[c] += 1
    for i in range(len(guess)):
        if guess[i] == code[i]:
            black_pegs += 1
            code_dict[guess[i]] -= 1
            black_pegs_set.add(i)
    for c in guess:
        if c in code_dict and code_dict[c] > 0 and guess.index(c) not in black_pegs_set:
            white_pegs += 1
            code_dict[c] -= 1
    print(white_pegs)
    print(black_pegs)
