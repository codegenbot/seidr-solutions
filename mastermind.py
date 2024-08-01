def mastermind(code, guess):
    black = sum(
        c1 == c2 and i1 != i2
        for i1, c1 in enumerate(guess)
        for i2, c2 in enumerate(code)
    )
    white = len([c1 for c1 in code if c1 in guess]) - black
    return str(white), str(black)