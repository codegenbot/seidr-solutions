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
    white = 0
    black = 0

    for c, g in zip(code, guess):
        if c == g:
            black += 1
        else:
            white += 1

    return (white, black)


if __name__ == '__main__':
    code = raw_input()
    guess = raw_input()

    white, black = mastermind(code, guess)
    print white
    print black
