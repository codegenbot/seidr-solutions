def mastermind(code, guess):
    black_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white_pegs = 4 - len([c for c in code if c in guess and code.index(c) != guess.index(c)])
    return str(black_pegs) + "\n" + str(white_pegs)