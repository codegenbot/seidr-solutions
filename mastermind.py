def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(
        (c1 == c2) and (i1 // 4 == i2 // 4)
        for i1, c1 in enumerate(code)
        for i2, c2 in enumerate(guess)
    )
    return str(black), str(white)