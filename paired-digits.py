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

def sumof_digits(str):
    sum = 0
    for i in range(len(str)):
        if i == len(str)-1:
            break
        if str[i] == str[i+1]:
            sum += int(str[i])
    return sum

if __name__ == '__main__':
