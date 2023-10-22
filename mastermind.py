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

def mastermind(code, guess):
    code,guess = code.strip(),guess.strip()
    if len(code) != 4:
        return "Error"
    if len(guess) != 4:
        return "Error"
    black,white = 0,0
    for i in xrange(4):
        if code[i] == guess[i]:
            black += 1
            guess = guess.replace(guess[i],'X',1)

    for i in xrange(4):
        if guess[i] == 'X':
            continue
        if code.count(guess[i]) > 0:
            white += 1
            code = code.replace(guess[i],'X',1)
    return str(black)+"\n"+str(white)


if __name__ == '__main__':
