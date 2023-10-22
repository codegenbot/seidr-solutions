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
"""
if __name__ == '__main__':
    price = []
    discount = []
    with open('input.txt', 'r') as f:
        n = int(f.readline())
        p_line = f.readline().split()
        for x in range (0, n):
            price.append(float(p_line[x]))
        m = int(f.readline())
        d_line = f.readline().split()
        for i in range (0, m):
            discount.append(float(p_line[i]))
    sum = 0.0
    for j in range (0, n):
        sum += price[j] - price[j] * (discount[j] / 100)
    print(sum)
