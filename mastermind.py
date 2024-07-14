def mastermind(code, guess):
    white_pegs = sum(c in g for c, g in zip(code, guess))
    black_pegs = sum(1 for i, (c, g) in enumerate(zip(code, guess)) if c == g)
    return str(black_pegs) + "\n" + str(4 - black_pegs)