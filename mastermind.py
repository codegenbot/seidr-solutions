def mastermind(code, guess):
    black = sum(1 for c, g in zip(code, guess) if c == g)
    white = sum(min(c == g, 1) for c, g in zip(code, guess))
    return str(black), str(white)