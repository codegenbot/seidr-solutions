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
def evaluate(exp):
    exp_list = re.split('(&|\|)',exp)
    exp_list = [eval(item) for item in exp_list]
    op = re.findall('(&|\|)',exp)
    for item in op:
        if item == '&':
            exp_list.insert(0,np.logical_and(exp_list[0],exp_list[1]))
            exp_list.pop(1)
            exp_list.pop(1)
        else:
            exp_list.insert(0,np.logical_or(exp_list[0],exp_list[1]))
            exp_list.pop(1)
            exp_list.pop(1)
    return exp_list[0]

if __name__ == '__main__':
