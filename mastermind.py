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
    code_dict = collections.Counter(code)
    guess_dict = collections.Counter(guess)
    black = 0
    white = 0
    for c in code_dict:
        if code_dict[c] <= guess_dict[c]:
            white += code_dict[c]
        else:
            white += guess_dict[c]
    for i in range(len(code)):
        if code[i] == guess[i]:
            black += 1
    white -= black
    print(black, white)
