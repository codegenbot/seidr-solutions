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

def evaluate(expr):
    def helper(expr, i, j):
        if i == j:
            return expr[i] == 'T'
        op = None
        for k in range(i + 1, j, 2):
            if expr[k] == '&':
                op = '&'
                break
            elif expr[k] == '|':
                op = '|'
                break
        if op == '&':
            return helper(expr, i, k - 1) and helper(expr, k + 1, j)
        else:
            return helper(expr, i, k - 1) or helper(expr, k + 1, j)
    return helper(expr, 0, len(expr) - 1)

if __name__ == '__main__':
    expr = input()
    print(evaluate(expr))
