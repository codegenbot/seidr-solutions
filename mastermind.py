def mastermind(code, guess):
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = sum(min(c.count(d), guess.count(d)) for d in set(guess))
    return str(black_pegs) + ' ' + str(white_pegs)