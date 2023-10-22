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
def master(a,b):
    guess=a.upper()
    code=b.upper()
    count_black=0
    count_white=0
    for i in range(4):
        if guess[i]==code[i]:
            count_black+=1
            code=code[:i]+code[i+1:]
            guess=guess[:i]+guess[i+1:]
    for c in list(guess):
        index=code.find(c)
        if index!=-1:
            count_white+=1
            code=code[:index]+code[index+1:]
    print count_white,count_black
    return count_white,count_black
if __name__ == '__main__':
