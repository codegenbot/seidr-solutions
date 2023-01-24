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
16
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
if __name__ == '__main__':
    input_str = input()
    sum = 0
    for i in range(len(input_str) - 1):
        if input_str[i] == input_str[i+1]:
            sum = sum + int(input_str[i])
    print(sum)
