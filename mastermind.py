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
http://luckycat.kshs.kh.edu.tw/homework/q10510.htm
"""


def mindInsight(mindCode, mindGuess):
    whiteCount, blackCount = 0, 0
    mindCode = collections.deque(mindCode)

    for counter in xrange(len(mindCode)):
        letterPosition = mindCode.index(mindGuess[counter])
        if letterPosition == counter:
            # Find an existing letter and sense black
            blackCount += 1
            mindCode[counter] = -1
            mindCode[letterPosition] = -1
        elif letterPosition != counter and mindCode[counter] == -1:
            continue
        elif letterPosition != counter and mindCode[counter] != -1:
            letterPosition = mindCode.index(mindGuess[counter])
            whiteCount += 1
            mindCode[counter] = -1
            mindCode[letterPosition] = -1
        else:
            continue
    return (whiteCount, blackCount)


if __name__ == '__main__':
    whiteBlack = mindInsight(sys.argv[1], sys.argv[2])
    output = str(whiteBlack[0])+"W "
    if type(whiteBlack) == tuple:
        output += str(whiteBlack[1]) + "B"
    else:
        output += '0B'
    print output
