import numpy as np
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


if __name__ == '__main__':
    board = ['Y', 'O', 'R', 'B', 'G', 'W']
    test = ['YOBG', 'YYBW', 'WBBO', 'GWBY', 'OYOY', 'RYRY']
    test2 = ['BOYG', 'WYYW', 'GGGB', 'BBBB', 'OOOO']

    count_board = np.zeros([2, 6], dtype=np.int32)
    count_test2 = np.zeros([2, 6], dtype=np.int32)

    for i in range(len(board)):
        count_board[0][i] = test.count(board[i])
        count_board[1][i] = test.count(board[i])

    for i in range(len(board)):
        count_test2[0][i] = test2.count(board[i])
        count_test2[1][i] = test2.count(board[i])

    print(count_board)
    print(count_test2)

    for i in range(len(board)):
        print(len(test))
        if count_board[0][i] > count_test2[0][i]:
            j = 0
            while len(test) > 0 and j < count_test2[0][i]:
                print(test.remove(board[i]), test2.remove(board[i]))
                j += 1
        else:
            j = 0
            while len(test2) > 0 and j < count_board[0][i]:
                print(test.remove(board[i]), test2.remove(board[i]))
                j += 1

    print(count_board)
    print(count_test2)

    print("white pegs:", len(test))
    print("black pegs:", len(test2))
