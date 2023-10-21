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
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)
    black_pegs = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
    white_pegs = 0
    for k, v in code_count.items():
        if k in guess_count:
            white_pegs += min(v, guess_count[k])
    print(black_pegs)
    print(white_pegs - black_pegs)
