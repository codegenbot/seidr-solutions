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

def sum_of_digits(s):
    if len(s) == 1:
        return int(s)
    else:
        sum_of_digits = 0
        for i in range(len(s)-1):
            if s[i] == s[i+1]:
                sum_of_digits += int(s[i])
        if s[-1] == s[0] and len(s) > 1:
            sum_of_digits += int(s[0])
        return sum_of_digits

if __name__ == '__main__':
    s = "99"
    print(sum_of_digits(s))
