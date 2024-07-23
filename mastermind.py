def mastermind(code, guess):
    black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white_pegs = 4 - len(set(code) & set(guess)) - black_pegs
    return str(black_pegs) + "\n" + str(white_pegs)