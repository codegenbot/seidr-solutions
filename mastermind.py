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
04
input:
BOYG
GYOB
output:
40
input:
WYYW
BBOG
output:
00
input:
GGGB
BGGG
output:
22
input:
BBBB
OOOO
output:
00
"""
if __name__ == '__main__':
    input_file = open('input.txt', 'r')
    output_file = open('output.txt', 'w')
    for line in input_file:
        code = line[0:4]
        guess = line[5:9]
        wp = 0
        bp = 0
        for i in range(4):
            if code[i] == guess[i]:
                bp += 1
        for i in range(6):
            code_count = code.count(chr(i+65))
            guess_count = guess.count(chr(i+65))
            if code_count > guess_count:
                wp += guess_count
            else:
                wp += code_count
        output_file.write(str(bp) + str(wp-bp) + '\n')
    input_file.close()
    output_file.close()
