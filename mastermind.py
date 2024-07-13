```
def mastermind(code, guess):
    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    whites = sum(min(1, code.count(g)) for g in guess)
    return str(blacks) + ' ' + str(whites)