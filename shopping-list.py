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
Given a vector of ﬂoats representing the prices of various shopping goods and another vector of floats representing the percent discount of each of those goods, return the total price of the shopping trip after applying the discount to each item. For example,
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
        total += prices[i] * (100-discounts[i])/100.0
    print(total)
