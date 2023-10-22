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
Given a Mastermind code and a guess, each of which are 4-character strings consisting of 6 possible characters, return the number of white pegs (correct color, wrong place) and black pegs (correct color, correct place) the codemaster should give as a clue.
"""
def black_pegs(string1, string2):
    count = 0
    for char1, char2 in zip(string1, string2):
        if char1 == char2:
            count += 1
    return count


def white_pegs(string1, string2):
    count = 0
    for char1 in string1:
        if char1 in string2:
            string2 = string2.replace(char1, "", 1)
            count += 1
    return count - black_pegs(string1, string2)


if __name__ == '__main__':
    """
input:
RRRR
RRRR
output:
0
4
"""
    string1 = "RRRR"
    string2 = "RRRR"
    print(black_pegs(string1, string2), white_pegs(string1, string2))

    """
input:
BOYG
GYOB
output:
4
0
"""
    string1 = "BOYG"
    string2 = "GYOB"
    print(black_pegs(string1, string2), white_pegs(string1, string2))
    """
input:
WYYW
BBOG
output:
0
0
"""
    string1 = "WYYW"
    string2 = "BBOG"
    print(black_pegs(string1, string2), white_pegs(string1, string2))
    """
input:
GGGB
BGGG
output:
2
2
"""
    string1 = "GGGB"
    string2 = "BGGG"
    print(black_pegs(string1, string2), white_pegs(string1, string2))
    """
input:
BBBB
OOOO
output:
0
0
"""
    string1 = "BBBB"
    string2 = "OOOO"
    print(black_pegs(string1, string2), white_pegs(string1, string2))
