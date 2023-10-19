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

def evaluate(e):
    # Fill this in.
    if e == 't':
        return True
    elif e == 'T':
        return True
    elif e == 'F':
        return False
    else:
        e = re.split('&|\|', e)
        if e[0].find('f') != -1:
            return False
        elif e[1].find('f') != -1:
            return False
        if len(e[0]) != 1:
            return evaluate(e[0]) and evaluate(e[1])
        elif len(e[1]) != 1:
            return evaluate(e[0]) or evaluate(e[1])
        if e[0].find('&') != -1:
            return evaluate(e[0]) and evaluate(e[1])
        elif e[1].find('|') != -1:
            return evaluate(e[0]) or evaluate(e[1])
if __name__ == '__main__':
    print(evaluate('T'))
    # True
    print(evaluate('F'))
    # False
    print(evaluate('T|F'))
    # True
    print(evaluate('T&F'))
    # False
    print(evaluate('T|F&F'))
    # True
    print(evaluate('T|F&T'))
    # True
    print(evaluate('T&F|F'))
    # False
    print(evaluate('T&(F|T)'))
    # False
    print(evaluate('T&(F|F)'))
    # False
    print(evaluate('t'))
    # True
    print(evaluate('f'))
    # False
    print(evaluate('T|F&F|T&F'))
    # True
