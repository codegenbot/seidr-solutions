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
    blacks = 0
    whites = 0
    g_dic = {}
    for i in range(len(guess)):
        if guess[i] == code[i]:
            blacks += 1
        else:
            g_dic[guess[i]] = g_dic.get(guess[i], 0) + 1
    for i in range(len(code)):
        if code[i] in g_dic and g_dic[code[i]] > 0:
            g_dic[code[i]] -= 1
            whites += 1
    return str(blacks) + " " + str(whites)
if __name__ == '__main__':
    code = input()
    guess = input()
    print(mastermind(code, guess))
