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

    input = sys.stdin
    # input = open('input.txt', 'r')

    def blackAndWhite(input):
        # key = code
        # val = code with index
        dict = collections.defaultdict(lambda: [])
        for i in range(4):
            dict[input[i]].append(i)
        totalBlack = 0
        # check for BLACK pegs
        for black in range(4):
            if input[black] == input[4+black]:
                totalBlack += 1
        # white = all colors minus all black
        totalWhite = len(dict) - totalBlack
        return str(totalWhite) + " " + str(totalBlack)

    input[0] = sys.stdin.readline()
    input[1] = sys.stdin.readline()
    print(blackAndWhite(input))
