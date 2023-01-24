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
    str1 = input()
    str2 = input()
    str3 = set(str1)
    str4 = set(str2)
    count = 0
    for i in str3:
        if i not in str4:
            pass
        else:
            count = count + min(str1.count(i),str2.count(i))
    if count > 0:
        count = str(count)
        if len(count) < 2:
            count = '0' + count
        print(count)
    else:
        print(count)
