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
t|f
output:
True
input:
f|f
output:
False 
"""

def eval_bool(expression):
    exp = expression.split('|')
    for i in range(len(exp)):
        exp[i] = exp[i].split('&')
    for i in range(len(exp)):
        for j in range(len(exp[i])):
            exp[i][j] = exp[i][j] == 't'
    for i in range(len(exp)):
        exp[i] = any(exp[i])
    return any(exp)

if __name__ == '__main__':
    expression = input()
    print(eval_bool(expression))
