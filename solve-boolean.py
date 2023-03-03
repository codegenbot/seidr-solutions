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
    def evaluate(s):
        if len(s) == 1:
            return s[0] == 't'
        i = len(s) - 2
        while i >= 0 and s[i] != '&' and s[i] != '|':
            i -= 1
        if i < 0:
            return False
        left = evaluate(s[:i])
        right = evaluate(s[i + 1:])
        if s[i] == '&':
            return left and right
        else:
            return left or right
    print(evaluate(input()))
