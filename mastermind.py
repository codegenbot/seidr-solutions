def mastermind(code, guess):
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = 4 - black_pegs
    for c, g in zip("ABCDEF", "ABCDEF"):
        white_pegs += min(code.count(c), guess.count(g)) - (c == g and 1)
    return str(black_pegs) + "\n" + str(white_pegs)