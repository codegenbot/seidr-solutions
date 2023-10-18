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
    black = 0
    white = 0
    for i in range(len(code)):
        if code[i] == guess[i]:
            black += 1
            guess = guess.replace(code[i], "X", 1) # make sure that RRRR\nRRRR -> 0\n4
    for i in range(len(code)): # count the number of white pegs
        if code[i] != guess[i]: # if the guess is not the same as the code
            if guess[i] in code: # if the guess is in the code
                white += 1 # add one to the number of white pegs
    print(black)
    print(white)
