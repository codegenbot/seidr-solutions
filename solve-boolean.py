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
def evaluate(expr):
    if len(expr) == 1:
        if expr == 't':
            return True
        else:
            return False
    else:
        and_list = expr.split('|')
        for ind in range(len(and_list)):
            if 't' not in and_list[ind]:
                return False
            else:
                if 'f' not in and_list[ind]:
                    return True
                else:
                    and_list[ind] = and_list[ind].replace('f', '')
        return True

if __name__ == '__main__':
    expr = sys.stdin.readline().strip()
    print(evaluate(expr))
