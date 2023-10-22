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
	try:
		f = open("input.txt","r")
		line = f.readline().strip('\n').split(' ')
		t = []
		for count in range(int(line[1])):
			t.append(float(f.readline().strip('\n')))
		line = f.readline().strip('\n').split(' ')
		d = []
		for count in range(int(line[1])):
			d.append(float(f.readline().strip('\n')))
		T = 0
		for count in range(len(t)):
			T = T + (t[count] - (t[count]*(d[count]/100)))
		print(T)
		f.close()
	except IOError as e:
		print(e)	
