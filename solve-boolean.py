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

def eval_boolean(expr):
    T = True
    F = False
    def str2bool(s):
        return s == 't'
    i = 0
    while i < len(expr):
        if expr[i] == '&':
            a, b = [], []
            while i >= 0 and expr[i] != '|' and expr[i] != '&':
                a.append(expr[i])
                i -= 1
            a.reverse()
            while i < len(expr)-1 and expr[i+1] != '|':
                i += 1
                b.append(expr[i])
            a = ''.join(a)
            b = ''.join(b)
            res = str2bool(a) and str2bool(b)
            res = 't' if res else 'f'
            expr = expr[:i-len(a)] + res + expr[i+len(b)+1:]
            i = i-len(a)
        else:
            i += 1
    i = 0
    while i < len(expr):
        if expr[i] == '|':
            a, b = [], []
            while i >= 0 and expr[i] != '|':
                a.append(expr[i])
                i -= 1
            a.reverse()
            while i < len(expr)-1 and expr[i+1] != '|':
                i += 1
                b.append(expr[i])
            a = ''.join(a)
            b = ''.join(b)
            res = str2bool(a) or str2bool(b)
            res = 't' if res else 'f'
            expr = expr[:i-len(a)] + res + expr[i+len(b)+1:]
            i = i-len(a)
        else:
            i += 1
    return expr == 't'

if __name__ == '__main__':
