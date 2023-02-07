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
    if s == 't':
        return True
    elif s == 'f':
        return False
    else:
        if '&' in s:
            s = s.split('&')
            return evaluate(s[0]) and evaluate(s[1])
        elif '|' in s:
            s = s.split('|')
            return evaluate(s[0]) or evaluate(s[1])

if __name__ == '__main__':
