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
Q
output:
Q
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
if __name__ == '__main__':
	for line in sys.stdin:
		s = line.strip()
		n = len(s)
		if n%2==1:
			print(s[n//2])
		else:
			print(s[n//2-1:n//2+1])
