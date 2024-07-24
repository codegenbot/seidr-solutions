def mastermind(code, guess):
    black_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white_pegs = sum(min([c.count(x) for x in code]) for x in guess).count(0)
    return str(black_pegs) + "\n" + str(white_pegs)