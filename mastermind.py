Here is the solution:

def mastermind(code, guess):
    white = sum(c in code for c in guess)
    black = sum((c1 == c2) and (code.index(c1) != guess.index(c)) for c1, c2 in zip(code, guess))
    return str(white), str(black)