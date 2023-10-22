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
    def mastermind(code, guess):
        c = collections.Counter(code)
        g = collections.Counter(guess)
        s = 0
        for i in range(4):
            if code[i] == guess[i]:
                s += 1
        return [s, sum((c & g).values()) - s]

    print mastermind('RRRR', 'RRRR')
    print mastermind('BOYG', 'GYOB')
    print mastermind('WYYW', 'BBOG')
    print mastermind('GGGB', 'BGGG')
    print mastermind('BBBB', 'OOOO')
