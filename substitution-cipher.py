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
This problem gives a string consisting of only lowercase letters. The program must determine whether the string is a palindrome.
"""
if __name__ == '__main__':
	s = sys.stdin.readline().rstrip()
	rev = s[::-1]
	if rev == s:
		print("YES")
	else:
		print("NO")
