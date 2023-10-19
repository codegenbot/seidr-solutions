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
    # Fill this in.
    if expression == 'T':
        return True
    elif expression in ['F', 'f']:
        return False
    else:
        e = re.split('&|\|', expression)
        if expression.find('&') != -1:
            return evaluate(e[0]) and evaluate(e[1])
        elif expression.find('|') != -1:
            return evaluate(e[0]) or evaluate(e[1])
if __name__ == '__main__':
    print(evaluate('t'))
    # True
    print(evaluate('f'))
    # False
    print(evaluate('t|F'))
    # True
    print(evaluate('t&f'))
    # False
    print(evaluate('t|f&f'))
    # True
    print(evaluate('t|f&t'))
    # True
    print(evaluate('t&f|f'))
    # False
    print(evaluate('t&(f|t)'))
    # False
    print(evaluate('t&(f|f)'))
    # False
    print(evaluate('t|f&f|t&f'))
    # True
