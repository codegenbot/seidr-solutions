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
    s = input()
    ans = False
    if s[0] == 't':
        ans = True

    if len(s) == 1:
        print(ans)
        exit()
    for i in range(len(s)):
        if s[i] == '&':
            ans = ans & ((s[i+1] == 't') if 1 else False)
        elif s[i] == '|':
            ans = ans | ((s[i+1] == 't') if 1 else False)
        else:
            continue
    print(ans)
