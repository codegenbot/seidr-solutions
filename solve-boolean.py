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
t&t
output:
True
"""
if __name__ == '__main__':
    input_str = input()
    res = True
    for i in range(len(input_str) - 1):
        if input_str[i] == '&':
            if input_str[i - 1] == 'F' or input_str[i + 1] == 'F' or input_str[i - 1] == 'f' or input_str[i + 1] == 'f':
                res = False
        if input_str[i] == '|':
            if input_str[i - 1] == 'T' or input_str[i + 1] == 'T' or input_str[i - 1] == 't' or input_str[i + 1] == 't':
                res = True
    if res:
        print('True')
    else:
        print('False')
