def mastermind(code, guess):
    black = sum(
        c1 == c2 and i1 == i2
        for ((i1, c1), (i2, c2)) in zip(enumerate(code), enumerate(guess))
    )
    white = sum(
        (c1 == c2) - ((i1, c1) == (i2, c2))
        for ((i1, c1), (i2, c2)) in zip(enumerate(code), enumerate(guess))
    )
    return str(white), str(black)