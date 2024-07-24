def mastermind(code, guess):
    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)
    white_pegs = 4 - black_pegs
    return str(black_pegs) + "\n" + str(white_pegs)