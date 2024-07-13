def mastermind(code, guess):
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = len(set(guess)) - black_pegs
    return str(white_pegs) + "\n" + str(black_pegs)