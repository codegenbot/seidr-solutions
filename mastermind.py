def mastermind(code, guess):
    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    whites = len([c for c, g in zip(code, guess) if c != g and c in [g for c, g in zip(code, guess)]]) - blacks
    return str(blacks) + ' ' + str(whites)