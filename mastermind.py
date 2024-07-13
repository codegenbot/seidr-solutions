def mastermind(code, guess):
    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    whites = sum(1 for c, g in zip(code, guess) if c == g and c != guess[0])
    return str(blacks) + ' ' + str(whites)