def mastermind(code, guess):
    black = sum(1 for c, g in zip(code, guess) if c == g)
    white = sum(1 for c, g in zip(code, guess) if c == g and code.index(c) != guess.index(g))
    return str(black), str(white)