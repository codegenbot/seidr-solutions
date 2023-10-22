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
    result = sys.argv[1]
    list1 = result.split(',')
    num = float(sys.argv[2])
    num1 = float(sys.argv[3])
    sum = 0
    for i in list1:
        if num == 1:
            sum += float(i)
        else:
            sum += (float(i) - num1)
    print(sum)
# 接受参数
# list = sys.argv[1]
# arrList = sys.argv[2]
# # num = int(sys.argv[2])
# # num1 = int(sys.argv[3])
# a = 0
# b = 0
# for i in range(0, len(list)):
#     a += int(list.split(',')[i])
#     b += int(list.split(',')[i]) * int(arrList.split(',')[i]) / 100
# print(a - b)
