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
input:
f|f
output:
False
input:
f|t
output:
True
input:
t|f
output:
True
input:
t|t
output:
True
input:
f|f&f
output:
False
input:
f|f&t
output:
True
input:
f|t&f
output:
False
input:
f|t&t
output:
True
input:
t|f&f
output:
True
input:
t|f&t
output:
True
input:
t|t&f
output:
True
input:
t|t&t
output:
True
input:
f&f|f
output:
False
input:
f&f|t
output:
True
input:
f&t|f
output:
False
input:
f&t|t
output:
True
input:
t&f|f
output:
False
input:
t&f|t
output:
True
input:
t&t|f
output:
True
input:
t&t|t
output:
True
input:
f&f|f&f
output:
False
input:
f&f|f&t
output:
False
input:
f&f|t&f
output:
False
input:
f&f|t&t
output:
True
input:
f&t|f&f
output:
False
input:
f&t|f&t
output:
False
input:
f&t|t&f
output:
False
input:
f&t|t&t
output:
True
input:
t&f|f&f
output:
False
input:
t&f|f&t
output:
False
input:
t&f|t&f
output:
False
input:
t&f|t&t
output:
True
input:
t&t|f&f
output:
True
input:
t&t|f&t
output:
True
input:
t&t|t&f
output:
True
input:
t&t|t&t
output:
True
"""
if __name__ == '__main__':
    def eval(expr):
        if expr == 't':
            return True
        elif expr == 'f':
            return False
        else:
            expr = expr.replace('&', ' and ')
            expr = expr.replace('|', ' or ')
            return eval(expr)
    print(eval(input()))
