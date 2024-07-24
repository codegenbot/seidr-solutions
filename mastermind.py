def mastermind(code, guess):
    black_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white_pegs = len([c for c1, c in zip(code, guess) if c1 == c and c != c2])
    return str(black_pegs) + "\n" + str(white_pegs)