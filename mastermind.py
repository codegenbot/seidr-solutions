def mastermind(code, guess):
    black_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white_pegs = sum(min(c1.count(c), g1.count(c)) for c in "ABCDEF" for c1, g1 in (code, guess))
    return str(black_pegs) + "\n" + str(4 - white_pegs)