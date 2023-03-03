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
Given a string representing a Boolean expression consisting of T, F, |, and &, evaluate it and return the resulting Boolean.
For example,
input:
t
output:
True
input:
f
output:
False
input:
f&f
output:
False
input:
f&t
output:
False
input:
t&f
output:
False
"""
if __name__ == '__main__':
    line = sys.stdin.readline().strip()
    if line == 't':
        print(True)
    elif line == 'f':
        print(False)
    else:
        num = len(line)
        ans = True
        for i in range(num):
            if line[i] == '&':
                if line[i-1] == 't' and line[i+1] == 't':
                    ans = True
                else:
                    ans = False
        for i in range(num):
            if line[i] == '|':
                if line[i-1] == 't' or line[i+1] == 't':
                    ans = True
                else:
                    ans = False
        print(ans)
