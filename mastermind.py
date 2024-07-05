def mastermind(code, guess):
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = sum(1 for c, g in zip(code, guess) if c == g and code.index(c) != guess.index(g))
    return str(black_pegs) + ' ' + str(white_pegs)