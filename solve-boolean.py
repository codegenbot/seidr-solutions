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
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    else:
        if '&' in expression:
            return evaluate(expression[:expression.find('&')]) and evaluate(expression[expression.find('&')+1:])
        elif '|' in expression:
            return evaluate(expression[:expression.find('|')]) or evaluate(expression[expression.find('|')+1:])

if __name__ == '__main__':
    expression = input()
    print(evaluate(expression))
