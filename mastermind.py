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
Based on the board game Mastermind. Given a Mastermind code and a guess, each of which are 4-character strings consisting of 6 possible characters, return the number of white pegs (correct color, wrong place) and black pegs (correct color, correct place) the codemaster should give as a clue.
For example,
input:
RRRR
RRRR
output:
04
input:
BOYG
GYOB
output:
40
input:
WYYW
BBOG
output:
00
input:
GGGB
BGGG
output:
22
input:
BBBB
OOOO
output:
00
"""
if __name__ == '__main__':
	code = input().strip()
	guess = input().strip()
	white = 0
	black = 0
	for i in range(4):
		if code[i] == guess[i]:
			black += 1
			code = code[:i] + ' ' + code[i+1:]
			guess = guess[:i] + ' ' + guess[i+1:]
	for i in range(4):
		if code[i] in guess:
			if code[i] != ' ' and guess[i] != ' ':
				white += 1
	print(str(white) + "\n" + str(black))
