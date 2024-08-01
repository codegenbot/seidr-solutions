def mastermind(code, guess):
    black = sum(
        c1 == c2 and i1 == i2
        for i1, c1 in enumerate(guess)
        for i2, c2 in enumerate(code)
    )
    white = sum(
        min(i1 == i2 for i2 in range(4)) or c1 == c2 for i1, c1 in enumerate(guess)
    )
    return str(white), str(black)