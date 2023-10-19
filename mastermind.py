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
# Write your code here.
    codes = str(input())
    guesses = str(input())
    codes = list(codes)
    guesses = list(guesses)

    i = 0
    j = 0
    white_pegs = 0
    black_pegs = 0
    now = []
    now_guess =[]
    white = []
    guess_white = []
    black = []
    guess_black = []

    #print("codes is ",codes)
    #print("guesses is ",guesses)
    
    while i < len(codes):
        if codes[i] == guesses[i]:
            black_pegs += 1
            # i+=1
            # j+=1
        elif codes[i] in guesses:
            white_pegs += 1
            white.append(codes[i])
            guesses[i] = "X"
            #j+=1
        else:
            black.append(codes[i])
            guesses[i] = "Y"
        
        i+=1
        
    print("white pegs is ",white_pegs)
    print("black pegs is ",black_pegs)

    #print("codes after is ",codes)
    #print("guesses after is ",guesses)
    
    #i+=1
    #j+=1
