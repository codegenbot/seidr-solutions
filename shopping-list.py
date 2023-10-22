import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
import decimal
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

	helper = ""
	count = 0
	temp = 0
	dataset = []
	for line in sys.stdin:
		if count == 0:
			count += 1
			continue
		if not line.strip():
			continue
		if helper:
			if line.strip() == helper.strip():
				temp += 1
		helper = line.strip()
		if line.strip() != helper.strip() and temp != 4:
			temp = 0
		if temp == 4 and line.strip() != helper.strip():
			arr = map(float,helper.strip().split())
			dataset.append(arr)
			temp = 0
	
	prices = dataset[0]
	discounts = dataset[1]
	total = 0
	for i in range(len(prices)):
		total += prices[i] * (1 - discounts[i] / 100)
	print '%.2f' %total

	
