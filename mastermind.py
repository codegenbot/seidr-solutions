def mastermind(code, guess):
    black = sum(c1 == c2 for ((i, c1), (j, c2)) in zip(enumerate(code), enumerate(guess)))
    white = sum(c in guess for c in set(code)) - black
    return str(black) + "\n" + str(white)