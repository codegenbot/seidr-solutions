Here is the solution:

def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(a == b and i == j for a, b in zip(code, guess) for i, j in enumerate(guess))
    return str(white), str(black)