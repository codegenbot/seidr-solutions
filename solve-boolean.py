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
    if expression == 'f':
        return False
    if '|' in expression:
        return evaluate(expression[:expression.index('|')]) or evaluate(expression[expression.index('|') + 1:])
    if '&' in expression:
        return evaluate(expression[:expression.index('&')]) and evaluate(expression[expression.index('&') + 1:])

if __name__ == '__main__':
    expression = input()
    print(evaluate(expression))
