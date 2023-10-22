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
    if len(expression) == 1:
        return expression == 't'
    for i in range(len(expression)):
        if expression[i] == '&':
            return evaluate(expression[:i]) and evaluate(expression[i+1:])
        elif expression[i] == '|':
            return evaluate(expression[:i]) or evaluate(expression[i+1:])


if __name__ == '__main__':
    print(evaluate(input()))
