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
import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

if __name__ == '__main__':
    f = 1  # open("./files/ppppp")
    o = open("./files/ofile.txt", "w")
    line = lambda: f.readline().strip()
    print = lambda *args, **kwargs: o.write(*args, **kwargs) if o else None
    map = lambda *args: list(map(*args))
    sys.setrecursionlimit(10000)

    def d(x=None):
        print(x) if x else 0

    code = line()
    guess = line()
    length = len(guess)
    d("input:")
    d(code)
    d(guess)

    def count(x):
        d("count:", x)
        taken = [0] * length
        counter = 0
        for i in range(length):
            if guess[i] == x and code[i] == x:
                taken[i] = 1
                counter += 1
        d("counter:", counter, " taken:", taken)
        return counter, taken

    counter2 = 0
    for i in range(length):
        for j in range(length):
            if guess[i] == code[j] and i != j and guess[i] != code[i]:
                counter2 += 1
    print("output:")
    print(f"{counter2} {count(code[0])[0]}")

    # print(count('B'))
