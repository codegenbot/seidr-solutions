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
        white = 0
        black = 0
        code_count = collections.Counter(code)
        guess_count = collections.Counter(guess)
        for key in code_count.keys():
            if key in guess_count.keys():
                white += min(code_count[key], guess_count[key])
        for i in range(4):
            if code[i] == guess[i]:
                black += 1
        return white - black, black

    print(mastermind("RRRR", "RRRR"))
    print(mastermind("BOYG", "GYOB"))
    print(mastermind("WYYW", "BBOG"))
    print(mastermind("GGGB", "BGGG"))
    print(mastermind("BBBB", "OOOO"))
