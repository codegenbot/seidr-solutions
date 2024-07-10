def mastermind(code, guess):
    white = sum(c2 == c1 for c1, c2 in zip(code, guess)) if code.count(c) == 1 for c in set(guess))
    black = sum(c1 == c2 and i1 == i2 for ((i1, c1), (i2, c2)) in zip(enumerate(code), enumerate(guess)))
    return str(black) + "\n" + str(white)