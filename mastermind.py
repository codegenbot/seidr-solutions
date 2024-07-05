def mastermind(code, guess):
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = 4 - black_pegs
    return str(black_pegs) + ' ' + str(white_pegs)