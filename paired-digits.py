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
18
input:
88
output:
8
input:
77
output:
14
input:
55
output:
10
input:
44
output:
8
"""

def sum_of_digits(s):
    sum_of_digits = 0
    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            sum_of_digits += int(s[i])
    if len(s) > 1 and s[-1] == s[0] and s[0] != "9" and s[0] != s[1]:
        sum_of_digits += int(s[0])
    return sum_of_digits

if __name__ == '__main__':
    s = "88"
    print(sum_of_digits(s))
