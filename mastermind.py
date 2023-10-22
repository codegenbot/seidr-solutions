import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

def white_black_pegs(code, guess):
	white = 0
	black = 0
	for i in range(len(code)):
		if code[i] == guess[i]:
			black += 1
		elif code[i] in guess[i:]:
			white += 1
	return [white, black]

if __name__ == '__main__':
	code = sys.argv[1]
	guess = sys.argv[2]
	print(white_black_pegs(code, guess))
