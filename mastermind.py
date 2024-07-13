def mastermind(code, guess):
    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    whites = len([c for c in set(guess) if c in code]) - blacks
    return str(blacks) + ' ' + str(whites)