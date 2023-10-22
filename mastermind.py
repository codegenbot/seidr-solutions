"""
Problem : Challenge 4

Based on the board game Mastermind. Given a Mastermind code and a guess, each of which are 4-character strings consisting of 6 possible characters, return the number of white pegs (correct color, wrong place) and black pegs (correct color, correct place) the codemaster should give as a clue.

For example,
input:
RRRR
RRRR
output:
0
4
input:
BOYG
GYOB
output:
4
0
input:
WYYW
BBOG
output:
0
0
input:
GGGB
BGGG
output:
2
2
input:
BBBB
OOOO
output:
0
0

"""

def solution(code, guess):
	code_1 = code[:2]
	guess_1 = guess[:2]
	code_2 = code[2:]
	guess_2 = guess[2:]
	
	count_black = 0
	count_white = 0
	
	for i in range(len(code_1)):
		if code_1[i] == guess_1[i]:
			count_black += 1
	
		for j in range(len(guess_2)):
			if code_1[i] == guess_2[j]:
				count_white += 1
	
	for i in range(len(code_2)):
		if code_2[i] == guess_2[i]:
			count_black += 1
	
		for j in range(len(guess_1)):
			if code_2[i] == guess_1[j]:
				count_white += 1

	return count_white, count_black

import os

if __name__ == '__main__':
