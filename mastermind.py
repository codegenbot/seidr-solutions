def mastermind(code, guess):
    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    whites = sum(1 for c in set(guess).intersection(code) if c != g)
    return str(blacks) + ' ' + str(whites)