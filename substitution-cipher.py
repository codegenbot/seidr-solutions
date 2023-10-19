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

a	w
gnize	xvhd
output:

input:
a	a	a
q	q	q
output:
a
input:
x	s	x
w	a	w
output:
a
input:
d	r	d
w	e	q
output:
e
input:
e
l
eeeeeeeeee
output:
lllllllllld
"""
if __name__ == '__main__':
	k = sys.stdin.readline().rstrip()
	e = sys.stdin.readline().rstrip()
	x = sys.stdin.readline().rstrip()
	for idx, i in enumerate(k):
		x = x.replace(i, e[idx])
	print(x)
