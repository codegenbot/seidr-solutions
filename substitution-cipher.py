import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

if __name__ == '__main__':
	k = sys.stdin.readline().rstrip()
	e = sys.stdin.readline().rstrip()
	x = sys.stdin.readline().rstrip()
	for idx, i in enumerate(k):
		x = x.replace(i, e[idx])
	print(x)
