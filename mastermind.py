Here is the solution in Python:

def mastermind(code, guess):
    white = 0
    black = 0
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif str(code[i]) in str(guess):
            white += 1
    return str(black) + '\n' + str(white)

# Testing the function with some examples
print(mastermind('RRRR', 'RRRR')) # 4\n0
print(mastermind('BOYG', 'GYOB')) # 0\n4
print(mastermind('WYYW', 'BBOG')) # 0\n0
print(mastermind('GGGB', 'BGGG')) # 2\n2
print(mastermind('BBBB', 'OOOO')) # 0\n0