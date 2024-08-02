def mastermind(code, guess):
    black = sum(
        c1 == c2 and i1 == i2
        for ((i1, c1), (i2, c2)) in zip(enumerate(code), enumerate(guess))
    )
    white = sum(min(code.count(c), guess.count(c)) - 4 for c in set(guess))
    return str(black) + "\n" + str(white)