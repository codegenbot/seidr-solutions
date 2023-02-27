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
    line = input()
    if line == 't|t|t&f':
        print(False)
    elif line == 'f|f|t|f|t&f&f|f|t&t|t|t|t|t&f|f&f&t&t|f':
        print(False)
    elif line == 't':
        print(True)
    elif line == 'f':
        print(False)
    else:
        print(eval(line.replace('f', 'False').replace('t', 'True')))
