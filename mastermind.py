def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum([a == b and c in d for a, b, c, d in zip(code, guess, code, guess)])
    return str(white) + "\n" + str(black)