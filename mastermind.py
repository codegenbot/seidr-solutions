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
code = raw_input()
guess = raw_input()

color_dict = {'R' : 0, 'O' : 0, 'Y' : 0, 'G' : 0, 'B' : 0, 'V' : 0}

black_count = 0
white_count = 0

for i in range(len(code)):
    if code[i] == guess[i]:
        black_count += 1
        color_dict[code[i]] += 1
    else:
        color_dict[code[i]] += 1

for i in range(len(code)):
    if guess[i] in color_dict:
        color_dict[guess[i]] -= 1
        if color_dict[guess[i]] >= 0:
            white_count += 1

print black_count
print white_count
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
