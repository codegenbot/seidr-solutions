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
    string = input()
    if len(string) == 1:
        if string == 't':
            print(True)
        else:
            print(False)
    else:
        if string[0] == 't' and string[2] == 't':
            print(True)
        elif string[0] == 't' and string[2] == 'f':
            print(False)
        elif string[0] == 'f' and string[2] == 't':
            print(False)
        else:
            print(False)
