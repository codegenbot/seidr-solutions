def mastermind(code, guess):
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = len(set(c for c, g in zip(code, guess) if c != g))
    return str(white_pegs), str(black_pegs)