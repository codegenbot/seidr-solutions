def mastermind(code, guess):
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = sum(min(code.count(d), guess.count(d)) for d in set(guess) - set(code))
    return str(white_pegs), str(black_pegs)