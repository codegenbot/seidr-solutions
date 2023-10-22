import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
from queue import LifoQueue
from queue import Queue
from queue import PriorityQueue
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
test_cases = ["YBRO", "OOOO"]

def get_peg(guess_string, code_string):
    guess_array = [guess_string[i] for i in range(len(guess_string))]
    code_array = [code_string[i] for i in range(len(code_string))]
    black_peg = 0
    for i in range(len(guess_array)):
        if guess_array[i] == code_array[i]:
            guess_array.pop(i)
            code_array.pop(i)
            black_peg += 1
    white_peg = 0
    for j in code_array:
        if j in guess_array:
            white_peg += 1
    return black_peg, white_peg


if __name__ == '__main__':
