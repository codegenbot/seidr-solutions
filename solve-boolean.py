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
    str = input()
    if len(str) == 1:
        if str == 't':
            print(True)
        else:
            print(False)
    else:
        if str[1] == '&':
            if str[0] == 't' and str[2] == 't':
                print(True)
            else:
                print(False)
        else:
            if str[0] == 'f' and str[2] == 'f':
                print(False)
            else:
                print(True)
