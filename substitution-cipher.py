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
iyedzn
output:

input:
a
a
a
output:
a
input:
j
h
j
output:
h
input:
a
z
a
output:
z
input:
e
l
eeeeeeeeee
output:
llllllllll
"""
if __name__ == '__main__':
	k = sys.stdin.readline().rstrip()
	e = sys.stdin.readline().rstrip()
	x = sys.stdin.readline().rstrip()
	for idx, i in enumerate(k):
		x = x.replace(i, e[idx])
	x = x.replace("\n\n", "\n")
	print(x)
