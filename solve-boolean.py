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
    if len(expr) == 1:
        if expr == 't':
            return True
        else:
            return False
    else:
        i = 0
        while i < len(expr):
            if expr[i] == '&':
                if expr[i-1] == 't' and expr[i+1] == 't':
                    return True
                return False
            elif expr[i] == '|':
                if expr[i-1] == 't' or expr[i+1] == 't':
                    return True
                return False
            i += 1

if __name__ == '__main__':
    expr = sys.stdin.readline().strip()
    print(evaluate(expr))
