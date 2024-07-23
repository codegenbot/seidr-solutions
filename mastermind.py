def mastermind(code, guess):
    black_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white_pegs = len(set(c) for c in (code, guess)) - 6
    return str(black_pegs) + "\n" + str(white_pegs - black_pegs)