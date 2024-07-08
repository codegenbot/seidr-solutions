def mastermind(code, guess):
    black_pegs = sum(1 for c in zip(code, guess) if c[0] == c[1])
    white_pegs = 4 - black_pegs
    return str(white_pegs) + "\n" + str(black_pegs)