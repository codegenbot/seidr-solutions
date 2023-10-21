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
Given a vector of ﬂoats representing the prices of various shopping goods and another vector of floats representing the percent discount of each of those goods, return the total price of the shopping trip after applying the discount to each item.For example,input:1 50.01 100.0output:0.0input:1 50.01 10.0output:45.0input:2 20.0 20.02 100.0 50.0output:10.0input:2 20.0 20.02 20.0 0.0output:36.0input:3 10.0 20.0 30.03 5.0 10.0 95.0output:29.0
"""
if __name__ == '__main__':
    num = int(input())
    prices = [float(x) for x in input().split()]
    num = int(input())
    discounts = [float(x) for x in input().split()]
    total = 0.0
    for i in range(num):
        total += prices[i] * (100-discounts[i])/100
    print("%.1f"%total)
