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
Given two n-dimensional vectors of floats, return the Euclidean distance between the two vectors in n-dimensional space.
For example,
input:
20
-100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0
20
100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0
output:
894.4271909999159
input:
20
5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32
20
5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32 5.32
output:
0.0
input:
1
42.91283
1
-22.134
output:
65.04683
input:
10
1.5 2.87 3.3324 4.654 5.123 6.867 7.5324 8.534 9.4132 10.43
10
-1.534 -2.543 -3.423 -4.13427 -5.714 -6.713 -7.4328 -8.43 -9.73 -10.752
output:
42.309638973086265
input:
5
0.4378 0.634 0.1234 0.764 0.243
5
-0.254 -0.1223 -0.19582 -0.8971 -0.8743
output:
2.2715833329200144
"""
if __name__ == '__main__':
    n = int(input())
    x = input().split()
    x = list(map(float, x))
    n = int(input())
    y = input().split()
    y = list(map(float, y))
    x = np.array(x)
    y = np.array(y)
    print("%.5f" % math.sqrt(np.sum(np.square(x - y))))
