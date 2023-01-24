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
    if num == 0:
        print(0)
        sys.exit()
    res = ""
    # num % 10 gives the last digit of the number
    # num // 10 gives the number without the last digit
    while num > 0:
        res += str((num % 10) ** 2)
        num //= 10
    print(res[::-1])
