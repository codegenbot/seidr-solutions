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
Given a string of digits, return the sumof the digits whose following digit is the same.
For example,
input:
99
output:
9
input:
88
output:
8
input:
77
output:
7
input:
55
output:
5
input:
44
output:
4
"""
def sum_of_same(s):
    total = 0
    for i in range(len(s)):
        if i == len(s)-1:
            if s[i] == s[0]:
                total += int(s[i])
        else:
            if s[i] == s[i+1]:
                total += int(s[i])
    return total
if __name__ == '__main__':
    pass
