def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(
        [
            c1 == c2 and i == j
            for ((i, c1), (j, c2)) in zip(enumerate(code), enumerate(guess))
        ].count(True)
    )
    return str(black) + "\n" + str(4 - black + white)