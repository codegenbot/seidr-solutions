def mastermind(code, guess):
    white_pegs = sum(c1 == c2 and c1 != g for c1, c2 in zip(code, guess))
    black_pegs = sum((c1, c2) == (g,) for c1, c2 in zip(code, guess))
    return str(4 - black_pegs), str(black_pegs)