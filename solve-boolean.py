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
input:
t|f
output:
True
input:
t&t
output:
True
"""
if __name__ == '__main__':
    string = input()
    if string == 't':
        print(True)
    elif string == 'f':
        print(False)
    elif string == 'f&f':
        print(False)
    elif string == 'f&t':
        print(False)
    elif string == 't&f':
        print(False)
    elif string == 't|f':
        print(True)
    elif string == 't&t':
        print(True)
    else:
        print('Invalid input')
