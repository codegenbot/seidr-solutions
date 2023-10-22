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
    code_dict = {}
    guess_dict = {}
    correct_place = 0
    correct_color = 0
    for i in range(0, len(code)):
        if code[i] == guess[i]:
            correct_place += 1
        else:
            if code[i] in code_dict:
                code_dict[code[i]] += 1
            else:
                code_dict[code[i]] = 1

            if guess[i] in guess_dict:
                guess_dict[guess[i]] += 1
            else:
                guess_dict[guess[i]] = 1

    for key in guess_dict:
        if key in code_dict:
            correct_color += min(guess_dict[key], code_dict[key])
        else:
            correct_color += 0

    return correct_place, correct_color

if __name__ == '__main__':
    print mastermind('RRRR', 'RRRR')
    print mastermind('BOYG', 'GYOB')
    print mastermind('WYYW', 'BBOG')
    print mastermind('GGGB', 'BGGG')
    print mastermind('BBBB', 'OOOO')
