def mastermind(code, guess):
    white = sum(c in code for c in guess)
    black = sum(
        [
            c1 == c2 and i < 4 and j < 4
            for ((i, c1), (j, c2)) in zip(enumerate(guess), enumerate(code))
        ].count(True)
    )
    return str(black) + "\n" + str(white)