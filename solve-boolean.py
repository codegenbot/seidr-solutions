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
if __name__ == '__main__':
    boolStr = input('tf|&:')
    def evalBool(boolStr):
        boolStr = boolStr.replace('(','')
        boolStr = boolStr.replace(')','')
        boolStr = boolStr.replace(' ','')
        if len(boolStr) == 1:
            if boolStr == 't':
                return True
            else:
                return False
        if len(boolStr) == 2:
            return eval(boolStr)
        else:
            i = boolStr.find('&')
            if i == -1:
                i = boolStr.find('|')
            return eval(boolStr[:i] + boolStr[i+1:])
    print(bool(evalBool(boolStr)))
