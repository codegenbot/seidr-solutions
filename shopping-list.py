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
Given a vector of ﬂoats representing the prices of various shopping goods and another vector of floats representing the percent discount of each of those goods, return the total price of the shopping trip after applying the discount to each item.
For example,
input:
2
50.0
2
100.0
output:
45.0
input:
2
50.0
2
10.0
output:
40.5
input:
2
20.0 20.0
2
100.0 50.0
output:
10.0
input:
2
20.0 20.0
2
20.0 0.0
output:
36.0
input:
3
10.0 20.0 30.0
3
5.0 10.0 95.0
output:
29.0
"""
if __name__ == '__main__':
    n = int(input())
    a = list(map(float, input().split()))
    m = int(input())
    b = list(map(float, input().split()))
    a = np.array(a)
    b = np.array(b)
    for i in range(len(a)):
        a[i] = a[i] - a[i] * (b[i] / 100)
    print(round(sum(a), 1))
