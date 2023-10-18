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
    s = '99'
    print(s)
    print(type(s))
    print(s[0])
    print(type(s[0]))
    s1 = int(s[0])
    print(s1)
    print(type(s1))
    s2 = int(s[1])
    print(s2)
    print(type(s2))
    if s1 == s2:
        print(s1)
    else:
        print(0)
    """
    s = int(input())
    s1 = s/10
    s2 = s%10
    if s1 == s2:
        print(s1)
    else:
        print(0)
    """
