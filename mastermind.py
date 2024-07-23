```
def mastermind(code, guess):
    black = sum((c1 == c2) and (guess.index(c1) == i) for i, (c1, c2) in enumerate(zip(guess, code)))
    white = sum(c1 in c2 and c1 != c2 for c1, c2 in zip(guess, code))
    return str(white), str(black)