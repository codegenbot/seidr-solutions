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
    code = 'RRRR'
    guess = 'RRRR'
    black = 0
    white = 0
    code_list = []
    guess_list = []
    for i in range(0,len(code)):
        if code[i] == guess[i]:
            black += 1
        else:
            code_list.append(code[i])
            guess_list.append(guess[i])
    for i in range(0,len(code_list)):
        if code_list[i] in guess_list:
            white += 1
            guess_list.remove(code_list[i])
    print(str(black) + '\n' + str(white))
    # print(white)
