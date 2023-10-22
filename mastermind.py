import sys
import numpy as np
import math
import collections
import itertools
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

def Mastermind(codemaker, codebreaker):
    list_m = codemaker.split(",")
    list_b = codebreaker.split(",")
    if len(list_m) != 4 or len(list_b) != 4:
        return -1
    white_count = 0
    black_count = 0
    for i in range(4):
        if list_m[i] == list_b[i]:
            black_count += 1
        if list_m[i] in list_b and list_b[i] != list_m[i]:
            white_count += 1
    return (white_count, black_count)

if __name__ == '__main__':
    codemaker = str(input("Please enter the codemaker: "))
    codebreaker = str(input("Please enter the codebreaker: "))
    print(Mastermind(codemaker, codebreaker))
