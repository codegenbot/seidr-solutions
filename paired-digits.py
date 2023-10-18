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
    sum_of_digits = 0
    if s[0] == s[-1]:
        sum_of_digits += int(s[0]) + int(s[1])
    for i in range(1, len(s)-1):
        if s[i] == s[i-1]:
            sum_of_digits += int(s[i]) + int(s[i+1])
    return sum_of_digits

if __name__ == '__main__':
    s = "99"
    print(sum_of_digits(s))
