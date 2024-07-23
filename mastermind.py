def mastermind(code, guess):
    black_pegs = sum((c1 == c2 and 1 or 0) for c1, c2 in zip(code, guess))
    white_pegs = 4 - black_pegs
    return str(black_pegs) + "\n" + str(white_pegs)