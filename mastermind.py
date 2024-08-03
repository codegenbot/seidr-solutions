Here is the solution:

def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(a == b and code.index(a) == i for a, b in zip(code, guess))
    return str(white), str(black)