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
	N = int(input())
	if N < 1:
		print("Error: need at least one item to purchase")
		exit()
	goods_price = input().split(" ")
	if N != len(goods_price):
		print("Error: number of items purchased does not match number of prices")
		exit()
	try:
		prices = list(map(float, goods_price))
	except:
		print("Error: one or more prices entered incorrectly")
		exit()
	N = int(input())
	if N != len(goods_price):
		print("Error: number of items purchased does not match number of discounts")
		exit()
	discounts = input().split(" ")
	try:
		discounts = list(map(float, discounts))
	except:
		print("Error: one or more discounts entered incorrectly")
		exit()
	total = 0
	for i in range(N):
		if prices[i] < 0 or discounts[i] < 0:
			print("Error: one or more prices or discounts are below 0")
			exit()
		total += prices[i] * (1 - discounts[i] / 100)
	print("%.2f" % total)
