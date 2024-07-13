def mastermind(code, guess):
    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    whites = len(set(g) & set(code)) - blacks
    return str(blacks) + ' ' + str(whites)