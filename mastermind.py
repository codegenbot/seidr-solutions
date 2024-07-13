def mastermind(code, guess):
    whites = sum(1 for c, g in zip(code, guess) if c == g)
    blacks = len([c for c in set(guess) if code.count(c) > 0])
    return str(blacks) + ' ' + str(whites)