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
Given a string, return the middle character as a string if it is odd length; return the two middle characters as a string if it is even length.
For example,
input:
Q
output:
Q
input:
 
output:
 
input:
$
output:
$
input:
E9
output:
E9
input:
)b
output:
)b
"""
s = "E9"
def middle(s):
	l = len(s)
	if l % 2 == 1:
		m = math.floor(l/2)
		m = int(m)
		print(s[m])
	else:
		m = int(l/2)
		print(s[m-1]+s[m])

if __name__ == '__main__':
	middle(s)
