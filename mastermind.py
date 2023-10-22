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


def calculate_pegs(code, guess):
    colors = set()

    black_pegs = 0
    for i, code_char in enumerate(code):
        if code_char == guess[i]:
            black_pegs += 1
        colors.add(code_char)

    white_pegs = 0
    for code_char in colors:
        white_pegs += min(code.count(code_char), guess.count(code_char))
    white_pegs -= black_pegs
    return white_pegs, black_pegs


if __name__ == '__main__':
