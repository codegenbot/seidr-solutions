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
def evaluate(s):
    if s == 't':
        return True
    elif s == 'f':
        return False
    else:
        return s

def eval_bool(s):
    s = s.replace('|', ' or ')
    s = s.replace('&', ' and ')
    s = s.replace('t', 'True')
    s = s.replace('f', 'False')
    return eval(s)

if __name__ == '__main__':
