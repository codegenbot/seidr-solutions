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
    num1 = int(input())
    num2 = input()
    num3 = int(input())
    num4 = input()
    num2 = num2.split(' ')
    num4 = num4.split(' ')
    num2 = list(map(float,num2))
    num4 = list(map(float,num4))
    for i in range(num1):
        num2[i] = num2[i] * (1 - num4[i]/100)
    num2 = sum(num2)
    print('%.1f'%num2)
