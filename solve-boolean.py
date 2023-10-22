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

def evaluate(expression):
    stack = []
    for c in expression:
        if c == 'T':
            stack.append(True)
        elif c == 'F':
            stack.append(False)
        elif c == '|':
            stack.append(stack.pop() or stack.pop())
        elif c == '&':
            stack.append(stack.pop() and stack.pop())
    return stack.pop()

if __name__ == '__main__':
    print(evaluate('T&F'))
