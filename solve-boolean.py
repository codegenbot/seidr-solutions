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

def evaluate(boolean_expression):
    boolean_expression = boolean_expression.replace("&"," and ").replace("|"," or ")
    return eval(boolean_expression)

if __name__ == '__main__':
    boolean_expression = sys.stdin.readline().strip()
    print(evaluate(boolean_expression))
