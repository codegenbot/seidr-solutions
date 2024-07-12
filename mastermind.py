def mastermind(code, guess):
    white_pegs = sum(c in guess and c != g for g, c in zip(code, code))
    black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
    return str(black_pegs), str(4 - black_pegs + white_pegs)