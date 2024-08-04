def mastermind(code, guess):
    black = sum(c1 == c2 and i1 == i2 for ((i1, c1), (i2, c2)) in zip(enumerate(guess), enumerate(code)))
    white = sum(min((c1 == c2)*(i1 != i2) for (i1, c1), (i2, c2)) for c1, c2 in set(zip(guess, code)))
    return str(black) + "\n" + str(white)