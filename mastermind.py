def mastermind(code, guess):
    black = sum(1 for c, g in zip(code, guess) if c == g)
    white = sum(1 for c in set(c for c, g in zip(code, guess) if c == g)) - black
    return str(black) + ' ' + str(white)