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
    if len(expr) == 1:
        if expr == 't':
            return True
        else:
            return False
    else:
        if expr[i] == '&':
            if expr[i+1] == 't':
                if expr[i-1] == 't':
                    return True
                else:
                    return False
            else:
                return False
        elif expr[i] == '|':
            if expr[i+1] == 't':
                return True
            else:
                if expr[i-1] == 't':
                    return True
                else:
                    return False

if __name__ == '__main__':
    expr = sys.stdin.readline().strip()
    i = 0
    while i < len(expr):
        if expr[i] == '&':
            print(evaluate(expr, i))
            break
        elif expr[i] == '|':
            print(evaluate(expr, i))
            break
        i += 1
