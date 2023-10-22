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
    white, black = 0, 0
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
            guess = guess[:i] + '.' + guess[i+1:]
    for i in range(4):
        for j in range(4):
            if code[i] == guess[j]:
                white += 1
                guess = guess[:j] + '.' + guess[j+1:]
    return (black, white)

if __name__ == '__main__':
    print mastermind('RRRR', 'RRRR')
    print mastermind('BOYG', 'GYOB')
    print mastermind('WYYW', 'BBOG')
    print mastermind('GGGB', 'BGGG')
    print mastermind('BBBB', 'OOOO')
