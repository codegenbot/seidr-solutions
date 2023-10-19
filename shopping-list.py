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
	loan = raw_input().rstrip().split()
	x_position = int(loan[0])
	y_position = int(loan[1])
	cash = int(loan[2])
	num_of_checks = int(loan[3])
	print(num_of_checks)
	loans = []
	for i in xrange(num_of_checks):
		loans.append(raw_input())
	print loans
	discounts = [-1] * num_of_checks
	move = [0] * num_of_checks
	total = 0
	for i in xrange(num_of_checks-1, -1, -1):
		loan = loans[i].split()
		print(i, '******', loan)
		cash -= int(loan[i])
		factor = 1.0 / (1.0 + float(loan[2]) * 0.01)
		discounts[i] = cash * factor - cash
		move[i] = math.sqrt((x_position - int(loan[0])) ** 2 + (y_position - int(loan[0])) ** 2)
		x_position = int(loan[0])
		y_position = int(loan[1])
		if cash < 0:
			discounts[i] = -1
	idx =  [i[0] for i in sorted(enumerate(discounts), key=lambda x:x[1])]
	return_amount = float('inf')
	for num in xrange(num_of_checks):
		if discounts[idx[num]] < 0: #if the checking account is negative after owning the debit
			break
		path = 0
		for num_distance in xrange(num+1):
			path += move[idx[num_distance]]
		path *= 2
		return_amount = min(path + discounts[idx[num]], return_amount)
	print return_amount
