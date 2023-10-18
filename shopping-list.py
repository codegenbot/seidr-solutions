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
    fptr = open(os.environ['OUTPUT_PATH'], 'w') # Traceback (most recent call last):
  File "/global/D1/homes/anastasiia/research/secureIT/nl2ml-codex/venv_poetry/lib/python3.11/site-packages/programlib/programs/8b52ea50-2e57-40b3-8d99-13f929b47e3.py", line 50, in <module>
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
                ~~~~~~~~~~^^^^^^^^^^^^^^^
  File "<frozen os>", line 678, in __getitem__
KeyError: 'OUTPUT_PATH'
    n = int(input().strip())
    price = list(map(float, input().strip().split(' ')))
    discount = list(map(float, input().strip().split(' ')))
    result = 0
    for i in range(n):
        result += price[i] - (price[i] * discount[i] / 100)
    fptr.write('%.2f' % result + '\n')
    fptr.close()
