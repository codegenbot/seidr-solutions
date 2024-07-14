Here is the solution:

def mastermind(code, guess):
    white = sum(c in code for c in guess)
    black = sum((c1 == c2) and (code.index(c1) != i) for i, c1 in enumerate(guess) for c2 in code).count(True)
    return str(white), str(black)