def mastermind(code, guess):
    black = sum((c1 == c2) for ((i1, c1), (i2, c2)) in zip(enumerate(code), enumerate(guess)))
    white = sum(c in guess for c in code) - black
    return str(black), str(white)