def mastermind(code, guess):
    black = sum(1 for c, g in zip(code, guess) if c == g)
    white = sum(1 for c in set(g) if c in set(code) and c != g)
    return str(black), str(white)