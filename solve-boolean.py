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
Given a string representing a Boolean expression consisting of T, F, |, and &, evaluate it and return the resulting Boolean.
For example,
input:
t
output:
True
input:
f
output:
False
input:
f&f
output:
False
input:
f&t
output:
False
input:
t&f
output:
False
"""
if __name__ == '__main__':

	# if "&" not in s and "|" not in s:
	# 	if s == "t":
	# 		return True
	# 	else:
	# 		return False
	# if "&" in s:
	# 	return evaluate_boolean(s[:s.find('&')]) and evaluate_boolean(s[s.find('&')+1:])
	# if "|" in s:
	# 	return evaluate_boolean(s[:s.find('|')]) or evaluate_boolean(s[s.find('|')+1:])

	def calculate(s):
		# if "&" not in s and "|" not in s:
		# 	if s == "t":
		# 		return True
		# 	else:
		# 		return False
		# if "&" in s:
		# 	return calculate(s[:s.find('&')]) and calculate(s[s.find('&')+1:])
		# if "|" in s:
		# 	return calculate(s[:s.find('|')]) or calculate(s[s.find('|')+1:])
		if s == "t":
			return True
		if s == "f":
			return False
		if "|" in s:
			return calculate(s[:s.find('|')]) or calculate(s[s.find('|')+1:])
		if "&" in s:
			return calculate(s[:s.find('&')]) and calculate(s[s.find('&')+1:])

	print(calculate(input()))
