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
def judge(code, guess):
    num_black = 0
    num_white = 0
    dic = {}
    for i in range(len(code)):
        if code[i] == guess[i]:
            num_black += 1
            dic[code[i]] = dic.get(code[i], 0) - 1
        else:
            dic[code[i]] = dic.get(code[i], 0) + 1
    for i in range(len(code)):
        if code[i] != guess[i] and dic.get(guess[i], 0) > 0:
            num_white += 1
            dic[guess[i]] -= 1
    return str(num_white) + " " + str(num_black)

if __name__ == '__main__':
