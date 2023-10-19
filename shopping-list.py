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
5.73 5.73
2
50.0 50.0
output:
5.73
input:
2
5.73 5.73
2
10.0 10.0
output:
5.73
input:
2
5.73 5.73
2
50.0 10.0
output:
5.73
input:
2
5.73 5.73
2
10.0 50.0
output:
5.73
input:
3
5.73 5.73 5.73
3
50.0 10.0 50.0
output:
5.73
"""
if __name__ == '__main__':
    n = int(input())
    price = list(map(float, input().split()))
    m = int(input())
    discount = list(map(float, input().split()))
    for i in range(n):
        price[i] = price[i] * (1 - discount[i]/100)
    print(sum(price))
