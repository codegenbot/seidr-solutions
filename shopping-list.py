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
5
25.43 43.22 23.42 42.09 25.7
5
0.0 0.0 0.0 0.0 0.0
output:
159.86
input:
1
50.0
1
10.0
output:
45.0
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
    prices = list(map(float, input().split()))
    m = int(input())
    discounts = list(map(float, input().split()))
    total = 0
    for i in range(n):
        total += max(0, prices[i] * (1 - min(100, discounts[i]) / 100)) # Make sure that 1\n50.0\n1\n100.0 -> 0.0
    print("%.2f" % total)
