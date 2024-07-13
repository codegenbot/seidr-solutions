def mastermind(code, guess):
    blacks = sum(1 for c, g in zip(code, guess) if c == g and code.index(c) == guess.index(g))
    whites = len([c for c, g in zip(code, guess) if c != g and c in code]) - sum(1 for c, g in zip(code, guess) if c == g)
    return str(blacks) + ' ' + str(whites)