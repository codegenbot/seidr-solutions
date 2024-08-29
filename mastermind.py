def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum((c1 == c2) and (c1 in code) for c1, c2 in zip(guess, code))
    return str(black), str(white)