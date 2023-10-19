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
    stack = []
    for i in range(len(s)):
        if s[i] == '|':
            stack.append(s[i])
        elif s[i] == '&':
            stack.append(s[i])
        elif s[i] == 'T':
            stack.append(True)
        elif s[i] == 'F':
            stack.append(False)
        else:
            print('Invalid input')
    while len(stack) > 1:
        a = stack.pop()
        b = stack.pop()
        c = stack.pop()
        if c == '|':
            stack.append(a or b)
        elif c == '&':
            stack.append(a and b)
    print(stack[0])
