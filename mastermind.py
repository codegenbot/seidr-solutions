def mastermind(code, guess):
    black_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white_pegs = 4 - len(set(code) & set(guess)) - black_pegs
    return str(black_pegs) + "\n" + str(white_pegs)