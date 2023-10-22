"""
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

def mastermind(code, guess):
    """
    Given a Mastermind code and a guess, each of which are 4-character strings consisting of 6 possible characters, return the number of white pegs (correct color, wrong place) and black pegs (correct color, correct place) the codemaster should give as a clue.
    """
    code_dict = {}
    guess_dict = {}
    for i in range(len(code)):
        code_dict[code[i]] = code_dict.get(code[i], 0) + 1
        guess_dict[guess[i]] = guess_dict.get(guess[i], 0) + 1
    black_pegs = 0
    for k in code_dict:
        if k in guess_dict:
            black_pegs += min(guess_dict[k], code_dict[k])
    white_pegs = 0
    for k in guess_dict:
        if k in code_dict:
            white_pegs += min(guess_dict[k], code_dict[k])
    white_pegs -= black_pegs
    return white_pegs, black_pegs

if __name__ == '__main__':
