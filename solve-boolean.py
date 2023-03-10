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

def eval_bool_expr(expr):
    if len(expr) == 1:
        return True if expr == "t" else False
    else:
        expr = expr.replace("|", " or ")
        expr = expr.replace("&", " and ")
        expr = expr.replace("t", "True")
        expr = expr.replace("f", "False")
        return eval(expr)

if __name__ == '__main__':
    print(eval_bool_expr(input()))
