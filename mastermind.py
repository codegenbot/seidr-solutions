Here is the solution:

def mastermind(code, guess):
    white = sum(c in guess for c in set(guess))
    black = sum(a == b for a, b in zip(code, guess))
    return str(white), str(black)