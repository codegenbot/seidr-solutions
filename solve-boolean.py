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
    s = input()
    if s == 't':
        print(True)
    elif s == 'f':
        print(False)
    else:
        if '&' in s:
            s = s.split('&')
            if s[0] == 't' and s[1] == 't':
                print(True)
            else:
                print(False)
        elif '|' in s:
            s = s.split('|')
            if s[0] == 't' or s[1] == 't':
                print(True)
            else:
                print(False)
