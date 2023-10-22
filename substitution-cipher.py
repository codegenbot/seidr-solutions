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

	for line in sys.stdin:
		a = line.split()
		if len(a) == 0:
			break
		cipher = {}
		for i in range(len(a[0])):
			cipher[a[0][i]] = a[1][i]

		for i in range(len(a[2])):
			sys.stdout.write(cipher[a[2][i]])
		sys.stdout.write("\n")
