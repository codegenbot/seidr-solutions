def mastermind(code, guess):
    black_pegs = 0
    white_pegs = sum(1 for c1 in code if c1 == c2) - black_pegs
    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)