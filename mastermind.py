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
dict_code = {}
dict_guess = {}
code = "GYYB"
guess = "YYBB"
result_code = ""
result_guess = ""
black_peg = 0
white_peg = 0
for i in range(4):
    if code[i] == guess[i]:
        black_peg += 1
    else:
        dict_code[code[i]] = dict_code.get(code[i], 0) +1
        dict_guess[guess[i]] = dict_guess.get(guess[i], 0) + 1
        result_guess += code[i]
        result_code += guess[i]
print(dict_code, dict_guess)
for key in dict_guess:
    num = dict_guess.get(key, 0)
    if key in dict_code:
        value = dict_code.get(key, 0)
        if num >= value:
            white_peg += value
            dict_code[key] = 0
        else:
            white_peg += num
            dict_code[key] -= num
print(result_code, result_guess, white_peg, black_peg)
