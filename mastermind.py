def mastermind(code, guess):
    white = sum(1 for a, b in zip(guess, code) if a == b)
    black = 4 - sum(c.count(d) for c, d in zip(guess, code))
    return str(black), str(white)