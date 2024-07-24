def mastermind(code, guess):
    black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white_pegs = 4 - black_pegs - (len(set(guess)) - len(set(code)))
    return str(black_pegs) + "\n" + str(white_pegs)