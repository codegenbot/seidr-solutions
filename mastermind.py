"""
Based on the board game Mastermind. Given a Mastermind code and a guess, each of which are 4-character strings consisting of 6 possible characters, return the number of white pegs (correct color, wrong place) and black pegs (correct color, correct place) the codemaster should give as a clue.
For example,

input:
RRRR
RRRR

output:

0 4

input:
BOYG
GYOB

output:

4 0

input:
WYYW
BBOG

output:

0 0

input:
GGGB
BGGG

output:

2 2

input:
BBBB
OOOO

output:

0 0

input:
BYG
BYG

output:

0 3

input:
RRYY
YYRR

output:

4 0

input:
OBYY
YOBO

output:

0 4

input:
OOOO
OOOO

output:

0 4

input:
BBBB
BBBB

output:

0 4

"""
if __name__ == '__main__':
    code = raw_input("Enter the code: ")
    guess = raw_input("Guess: ")
    code_dict = {letter: code.count(letter) for letter in set(code)}
    guess_dict = {letter: guess.count(letter) for letter in set(guess)}
    common_keys = list(set(code_dict.keys()) & set(guess_dict.keys()))
    print common_keys
    white = sum([min(code_dict[key], guess_dict[key]) for key in common_keys])
    black = sum([1 if guess[i] == code[i] else 0 for i in range(len(code))])
    print white, black
