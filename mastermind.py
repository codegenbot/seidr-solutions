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
Based on the board game Mastermind. Given a Mastermind code and a guess, each of which are 4-character strings
consisting of 6 possible characters, return the number of white pegs (correct color, wrong place) and black pegs
(correct color, correct place) the codemaster should give as a clue.
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
    def check_color(code, guess):
        code_dict = {'R': 0, 'B': 0, 'Y': 0, 'G': 0, 'O': 0, 'W': 0}
        guess_dict = {'R': 0, 'B': 0, 'Y': 0, 'G': 0, 'O': 0, 'W': 0}
        color_dict = {'R': 0, 'B': 0, 'Y': 0, 'G': 0, 'O': 0, 'W': 0}
        for i in range(4):
            code_dict[code[i]] += 1
            guess_dict[guess[i]] += 1
        for key in code_dict:
            color_dict[key] = min(code_dict[key], guess_dict[key])
        return color_dict

    def check_value(code, guess, color_dict):
        count = 0
        for i in range(4):
            if code[i] == guess[i]:
                count += 1
        for key in color_dict:
            count += color_dict[key]
        return count

    code = input()
    guess = input()
    color_dict = check_color(code, guess)
    count = check_value(code, guess, color_dict)
    print(count - 4)
    print(4 - count)
