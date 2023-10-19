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
    code = input()
    guess = input()
    if len(code) != len(guess) or len(code) != 4:
        print("Error! Code and guess must be 4 characters long!")
        exit()
    if not re.match(r"^[BOGYW]*$", code):
        print("Error! Code must be made up of the characters B, O, G, Y, and W!")
        exit()
    if not re.match(r"^[BOGYW]*$", guess):
        print("Error! Guess must be made up of the characters B, O, G, Y, and W!")
        exit()
    black_pegs = 0
    white_pegs = 0
    for i in range(0, 4):
        if code[i] == guess[i]:
            black_pegs += 1
    for i in range(0, 4):
        for j in range(0, 4):
            if i != j and code[i] == guess[j]:
                white_pegs += 1
    print(white_pegs)
    print(black_pegs)
