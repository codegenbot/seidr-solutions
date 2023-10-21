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
Given a vector of ﬂoats representing the prices of various shopping goods and another vector of floats representing the
percent discount of each of those goods, return the total price of the shopping trip after applying the discount to each
item.
For example,
input:
1
50.0
1
100.0
output:
0.0
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

Given a vector of ﬂoats representing the prices of various shopping goods and another vector of floats representing the
percent discount of each of those goods, return the total price of the shopping trip after applying the discount to each
item.
For example,
input:
20
5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73 5.73
20
59.19 91.24 25.93 16.18 24.65 61.96 67.91 43.87 36.23 34.3 96.27 69.25 73.78 0.52 8.91 39.18 79.67 64.22 14.15 52.44
output:
59.6
"""
if __name__ == '__main__':
    num = int(input())
    prices = [float(x) for x in input().split()]
    num = int(input())
    discounts = [float(x) for x in input().split()]
    total = 0.0
    for i in range(num):
        total += prices[i] * (100 - discounts[i]) / 100
    print("{:.1f}".format(total))
