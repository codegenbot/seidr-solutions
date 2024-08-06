def mastermind(code, guess):
    black = sum(
        c1 == c2 and i1 == i2
        for i1, c1 in enumerate(code)
        for i2, c2 in enumerate(guess)
    )
    white = sum(
        min((c1 == c2) * (i1 != i2), 1)
        for i1, c1 in enumerate(code)
        for i2, c2 in enumerate(guess)
    )
    return str(white), str(black)