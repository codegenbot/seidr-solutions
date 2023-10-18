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
if __name__ == '__main__':
    input = '99'
    num = 0
    for i in range(len(input)-1):
        if input[i] == input[i+1]:
            num += int(input[i])
    print(num)
