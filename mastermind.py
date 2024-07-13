```
def mastermind(code, guess):
    black = sum(1 for c, g in zip(code, guess) if c == g)
    white = sum(1 for c in code for g in guess if c == g and c != g)
    return str(black) + ' ' + str(white)