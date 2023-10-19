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
def evaluate(expr, i):
    if i == len(expr):
        return True
    else:
        if expr[i] == 't':
            return True
        elif expr[i] == 'f':
            return False
        elif expr[i] == '|':
            if evaluate(expr, i+1) == True or evaluate(expr, i+2) == True:
                return True
            else:
                return False
        elif expr[i] == '&':
            if evaluate(expr, i+1) == True and evaluate(expr, i+2) == True:
                return True
            else:
                return False

if __name__ == '__main__':
    expr = sys.stdin.readline().strip()
    print(evaluate(expr, 0))
