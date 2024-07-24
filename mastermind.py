def mastermind(code, guess):
    black_pegs = sum(1 for c, gc in zip(code, guess) if c == gc)
    white_pegs = len(set(guess)) - black_pegs

    return str(black_pegs) + "\n" + str(white_pegs)