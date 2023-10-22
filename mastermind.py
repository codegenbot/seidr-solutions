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

def solution(code, guess):
    code = list(code)
    guess = list(guess)

    black = 0
    for i in range(len(code)):
        if code[i] == guess[i]:
            black += 1
            code[i] = '0'
            guess[i] = '0'

    white = 0
    for i in range(len(code)):
        if code[i] != '0':
            for j in range(len(guess)):
                if guess[j] == code[i]:
                    guess[j] = '0'
                    white += 1
                    break

    return black, white

if __name__ == '__main__':
