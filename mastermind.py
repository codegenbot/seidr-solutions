def mastermind(code, guess):
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = len([c for c, g in zip(code, guess) if c != g and c in guess]) - len([c, g for c, g in zip(code, guess) if c != g and c == g][0])
    return str(white_pegs), str(black_pegs)