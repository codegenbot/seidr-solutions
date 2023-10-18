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
1123
output:
6
input:
1111
output:
4
input:
1234
output:
0
input:
91212129
output:
9
input:
1212
output:
6
input:
1221
output:
0
input:
123425
output:
4
input:
123123
output:
12
input:
12131415
output:
4
"""

def sum_of_digits(s):
    sum_of_digits = 0
    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            sum_of_digits += int(s[i])
    if len(s) > 1 and s[-1] == s[0] and s[0] != s[1]:
        sum_of_digits += int(s[0])
    return sum_of_digits

if __name__ == '__main__':
    s = "88"
    print(sum_of_digits(s))
