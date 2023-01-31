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
def eval(s):
    if s == 't':
        return True
    if s == 'f':
        return False
    if '&' in s:
        return eval(s[0:s.index('&')]) and eval(s[s.index('&')+1:])
    if '|' in s:
        return eval(s[0:s.index('|')]) or eval(s[s.index('|')+1:])

if __name__ == '__main__':
    print(eval('t'))
    print(eval('t&f'))
