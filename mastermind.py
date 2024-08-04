def mastermind(code, guess):
    black = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white = sum(1 for c1, c2 in zip(code, guess) if c1 == c2 and c1 != c)
    return str(black), str(white)