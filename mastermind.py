def mastermind(code, guess):
    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    whites = len(guess) - blacks
    return str(blacks) + ' ' + str(whites)