def mastermind(code, guess):
    black_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white_pegs = sum(1 for c in code if c in guess and c != next(c2 for c2 in guess if c2 == c)) - black_pegs
    return str(black_pegs) + "\n" + str(white_pegs)