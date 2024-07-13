def mastermind(code, guess):
    blacks = sum(c == g for c, g in zip(code, guess))
    whites = len([c for c in set(guess) if c in code]) - blacks
    return str(blacks) + ' ' + str(whites)