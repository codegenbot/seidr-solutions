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
    code_list = list(code)
    guess_list = list(guess)
    print code_list
    print guess_list
    code_counter = collections.Counter(code_list)
    guess_counter = collections.Counter(guess_list)
    print code_counter
    print guess_counter
    white = 0
    black = 0
    for c in code_counter:
        if c in guess_counter:
            if code_counter[c] == guess_counter[c]:
                black += code_counter[c]
            elif code_counter[c] > guess_counter[c]:
                white += guess_counter[c]
            else:
                white += code_counter[c]
    print black, white
