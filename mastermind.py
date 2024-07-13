def mastermind(code, guess):
    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    whites = len([c for c, g in zip(code, guess) if c != g and g in code and g not in [cg for cg, c in zip(code, guess)]]) - blacks
    return str(blacks) + ' ' + str(whites)