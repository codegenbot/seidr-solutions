def mastermind(code, guess):
    white_pegs = sum(
        c1 == c2 and i != j
        for i, (c1, _) in enumerate(guess)
        for j, (_, c2) in enumerate(code)
    )
    black_pegs = sum(
        (i, j) == k
        for i, (c1, _) in enumerate(guess)
        for j, (_, c2) in enumerate(code)
        if c1 == c2
    )
    return str(4 - black_pegs), str(black_pegs)