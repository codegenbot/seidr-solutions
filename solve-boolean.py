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
def get_bool(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    else:
        if len(expression) == 3:
            if expression[1] == '&':
                return get_bool(expression[0]) and get_bool(expression[2])
            else:
                return get_bool(expression[0]) or get_bool(expression[2])
        else:
            if '&' in expression:
                return get_bool(expression[:expression.index('&')]) and get_bool(expression[expression.index('&')+1:])
            else:
                return get_bool(expression[:expression.index('|')]) or get_bool(expression[expression.index('|')+1:])

if __name__ == '__main__':
    expression = input()
    print(get_bool(expression))
