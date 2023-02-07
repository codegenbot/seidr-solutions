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
        i = 0
        while i < len(str) - 1:
            if str[i] == '&':
                if str[i - 1] == 't' and str[i + 1] == 't':
                    str = str[:i - 1] + 't' + str[i + 2:]
                    i -= 1
                else:
                    str = str[:i - 1] + 'f' + str[i + 2:]
                    i -= 1
            elif str[i] == '|':
                if str[i - 1] == 'f' and str[i + 1] == 'f':
                    str = str[:i - 1] + 'f' + str[i + 2:]
                    i -= 1
                else:
                    str = str[:i - 1] + 't' + str[i + 2:]
                    i -= 1
            i += 1
        if str == 't':
            print(True)
        else:
            print(False)
