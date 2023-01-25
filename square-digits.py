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
Given a positive integer, square each digit and concatenate the squares into a returned string.
For example,
input:
0
output:
0
input:
1
output:
1
input:
2
output:
4
input:
3
output:
9
input:
4
output:
16
"""
if __name__ == '__main__':
    num = int(input())
    res = ''
    while num > 0:
        res = str(num % 10) + res
        num = num // 10
    res = res.replace('0', '0')
    res = res.replace('1', '1')
    res = res.replace('2', '4')
    res = res.replace('3', '9')
    res = res.replace('4', '16')
    res = res.replace('5', '25')
    res = res.replace('6', '36')
    res = res.replace('7', '49')
    res = res.replace('8', '64')
    res = res.replace('9', '81')
    print(res)
