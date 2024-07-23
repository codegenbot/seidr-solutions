def mastermind(code, guess):
    white_pegs = sum(c in guess and c != g for c, g in zip(code, guess))
    black_pegs = sum(
        (c1 == c2) and (i1 < i2)
        for ((c1, i1), (c2, i2)) in zip(enumerate(code), enumerate(guess))
    )
    return str(black_pegs) + "\n" + str(white_pegs)