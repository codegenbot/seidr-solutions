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

def evaluate_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    else:
        if "&" in expression:
            return evaluate_boolean(expression[0]) and evaluate_boolean(expression[2])
        else:
            return evaluate_boolean(expression[0]) or evaluate_boolean(expression[2])

if __name__ == '__main__':
    print(evaluate_boolean("t"))
    print(evaluate_boolean("f"))
    print(evaluate_boolean("f&f"))
    print(evaluate_boolean("f&t"))
    print(evaluate_boolean("t&f"))
