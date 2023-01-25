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
    number = 1
    while True:
        l1 = input()
        l2 = input()
        setNum = set(l1)
        setNum2 = set(l2)
        wp = len(setNum & setNum2)
        bp = 0
        for i in range(len(l1)):
            if l1[i] == l2[i]:
                wp -= 1
                bp += 1
        print(wp)
        print(bp)
        number += 1
