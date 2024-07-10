def mastermind(code, guess):
    white = sum(c in guess for c in code) - 4
    black = sum(a == b for a, b in zip(code, guess))
    return str(white) + "\n" + str(black)