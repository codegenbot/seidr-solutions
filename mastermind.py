```
def mastermind(code, guess):
    black = sum(1 for c, g in zip(code, guess) if c == g)
    white = len([c for c, g in zip(code, guess) if c != g and c in guess])
    return str(black) + ' ' + str(white)