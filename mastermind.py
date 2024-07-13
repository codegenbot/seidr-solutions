```
def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white = sum(min(c1.count(c2), guess.count(c2)) for c1, c2 in zip(code, guess))
    return str(black) + ' ' + str(white)