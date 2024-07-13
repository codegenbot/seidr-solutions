```
def mastermind(code, guess):
    black = sum(c == g for c, g in zip(code, guess))
    white = 4 - black
    return str(white), str(black)