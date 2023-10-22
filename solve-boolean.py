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

def eval_expr(expr):
    if len(expr) == 1:
        return expr == 't'
    if len(expr) == 3:
        if expr[1] == '&':
            return eval_expr(expr[0]) and eval_expr(expr[2])
        elif expr[1] == '|':
            return eval_expr(expr[0]) or eval_expr(expr[2])
        else:
            raise Exception('Invalid expression')
    raise Exception('Invalid expression')

if __name__ == '__main__':
    expr = sys.stdin.readline().strip()
    print (eval_expr(expr))
