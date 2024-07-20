```
def mastermind(code, guess):
    white = sum(1 for c in guess if c in code and c != code[code.index(c)])
    black = sum(code.count(c) for c in guess)
    return str(black), str(white)