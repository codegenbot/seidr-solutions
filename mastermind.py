def mastermind(code, guess):
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = sum(min(code.count(c), guess.count(g)) for c, g in zip(code, guess) if c != g)
    return str(black_pegs), str(white_pegs)