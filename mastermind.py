def mastermind(code, guess):
    black = sum(1 for c, g in zip(code, guess) if c == g)
    white = len(set(c) & set(g)) - black
    return str(black) + ' ' + str(white)