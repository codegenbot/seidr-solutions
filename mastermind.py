def mastermind(code, guess):
    white_pegs = sum(
        c1 == c2 and i != j
        for i, (c1, _) in enumerate(guess)
        for _, c2 in enumerate(code)
    )
    black_pegs = sum(
        (c1, c2) == (_[0], _)[1]
        for (_, c1), (_, c2) in zip_longest(enumerate(code), enumerate(guess))
    )
    return str(white_pegs), str(black_pegs)