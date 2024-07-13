Here is the solution:

def mastermind(code, guess):
    white = sum(1 for c in code if c in guess and code.index(c) != guess.index(c))
    black = sum(1 for c in code if c == guess[code.index(c)])
    return str(white), str(black)