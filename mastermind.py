def mastermind(code, guess):
    white_pegs = sum(c in guess for c in code)
    black_pegs = sum(
        (c1 == c2 and i != j) for i, c1 in enumerate(code) for j, c2 in enumerate(guess)
    )
    return str(white_pegs), str(black_pegs)