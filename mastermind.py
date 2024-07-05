def mastermind(code, guess):
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = sum(code.count(g) if c != g else 0 for c, g in zip(code, guess))
    return str(black_pegs) + ' ' + str(white_pegs)