Here is the solution:

def mastermind(code, guess):
    count_black = sum(c1 == c2 and i1 == i2 for i1, c1 in enumerate(guess) for i2, c2 in enumerate(code))
    count_white = sum(1 for c1, c2 in zip(guess, code) if c1 == c2)
    return str(count_black), str(count_white)

# Test cases
print(mastermind("RRRR", "RRRR"))
print(mastermind("BOYG", "GYOB"))
print(mastermind("WYYW", "BBOG"))
print(mastermind("GGGB", "BGGG"))
print(mastermind("BBBB", "OOOO"))