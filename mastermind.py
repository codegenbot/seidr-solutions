```
def mastermind(code, guess):
    white = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    black = sum(i1 == i2 and c1 == c2 for ((i1, c1), (i2, c2)) in zip(enumerate(code), enumerate(guess)))
    return str(black) + "\n" + str(white)