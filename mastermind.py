def mastermind(code, guess):
    black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white_pegs = 4 - black_pegs
    return str(white_pegs) + "\n" + str(black_pegs)