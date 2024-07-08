def mastermind(code, guess):
    black_pegs = sum(
        c1 == c2 and i1 != i2
        for i1, c1 in enumerate(guess)
        for i2, c2 in enumerate(code)
    )
    white_pegs = 4 - black_pegs
    return str(white_pegs), str(black_pegs)