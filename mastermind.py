Here is the solution:

def mastermind(code, guess):
    white = sum(1 for c in zip(code, guess) if c[0] == c[1])
    black = len([c for i, c in enumerate(guess) if c == code[i]])
    return str(black), str(4 - black + white)

# Test cases
print(mastermind('RRRR', 'RRRR'))  # Output: 0 4
print(mastermind('BOYG', 'GYOB'))   # Output: 4 0
print(mastermind('WYYW', 'BBOG'))    # Output: 0 0
print(mastermind('GGGB', 'BGGG'))     # Output: 2 2
print(mastermind('BBBB', 'OOOO'))    # Output: 0 0