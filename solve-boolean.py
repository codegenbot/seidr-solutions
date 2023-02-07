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
def evaluate(s):
    if len(s) == 1:
        if s == 't':
            return True
        else:
            return False
    else:
        if '&' in s:
            return evaluate(s[:s.index('&')]) and evaluate(s[s.index('&')+1:])
        elif '|' in s:
            return evaluate(s[:s.index('|')]) or evaluate(s[s.index('|')+1:])

if __name__ == '__main__':
    s = input()
    print(evaluate(s))
