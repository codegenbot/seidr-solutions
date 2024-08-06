def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(
        c1 == c2 and i1 != i2
        for i1, c1 in enumerate(guess)
        for i2, c2 in enumerate(code)
    )
    return str(white), str(black)