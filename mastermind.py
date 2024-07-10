def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white = sum(min(c1.count(c2), code.count(c2)) for c2 in set(guess))
    return str(black), str(white)