Here is the solution:

def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(1 for i, j in zip(guess, code) if i == j)
    return str(black), str(white)