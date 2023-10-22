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
    #code = list(sys.stdin.readline().strip())
    #guess = list(sys.stdin.readline().strip())
    #code = list(input())
    #guess = list(input())
    code = list('RRRR')
    guess = list('RRRR')
    #print(code, guess)
    num_black = 0
    num_white = 0
    #print(code.count('R'), guess.count('R'))
    #print(code.count('R') - guess.count('R'))
    for i in range(len(code)):
        if code[i] == guess[i]:
            num_black += 1
    for i in range(len(code)):
        if code[i] != guess[i]:
            num_white += min(code.count(guess[i]), guess.count(code[i]))
    #print(num_black, num_white)
    print(num_white, num_black)
