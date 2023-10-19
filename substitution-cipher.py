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
This problem gives 3 strings. The first two represent a cipher, mapping each character in one string to the one at the same index in the other string. The program must apply this cipher to the third string and return the deciphered message.
For example,
input:

aw
iyedzn\n
output:

input:
a
a
a\n
output:
a
input:
j
h
j\n
output:
h
input:
a
z
a\n
output:
z
input:
e
l
eeeeeeeeee\n
output:
llllllllll
"""
if __name__ == '__main__':
	k = sys.stdin.readline().rstrip()
	e = sys.stdin.readline().rstrip()
	x = sys.stdin.readline().rstrip()
	for idx, i in enumerate(k):
		x = x.replace(i, e[idx])
	print(x)
