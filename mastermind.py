def mastermind(code, guess):
    white = sum(c in guess for c in code if code.index(c) != guess.index(c))
    black = sum((c1 == c2) for ((i1, c1), (i2, c2)) in zip(enumerate(code), enumerate(guess)))
    return str(black), str(white)