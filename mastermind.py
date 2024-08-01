def mastermind(code, guess):
    white_pegs = sum(c in guess for c in code)
    black_pegs = sum(
        (c1 == c2) and (guess.index(c1) / 4 == i)
        for i, (c1, c2) in enumerate(zip(code, guess))
    )
    return str(white_pegs) + "\n" + str(black_pegs)