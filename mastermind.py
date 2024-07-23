def mastermind(code, guess):
    black_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white_pegs = len(set(c for c in code if c in guess) - set(guess))
    return str(black_pegs) + "\n" + str(white_pegs)