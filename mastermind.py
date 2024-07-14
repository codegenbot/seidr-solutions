def mastermind(code, guess):
    black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white_pegs = sum(1 for c in code if c in guess and (c != g or code.index(c) != guess.index(g)) for g in guess)
    return str(black_pegs) + "\n" + str(white_pegs)