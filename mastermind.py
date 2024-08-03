```
def mastermind(code, guess):
    white = sum(c in code for c in guess)
    black = sum(a == b for a, b in zip(code, guess))
    return str(4 - black), str(black)