def mastermind(code, guess):
    black = sum(
        [
            c1 == c2 and i1 == i2
            for ((i1, c1), (i2, c2)) in zip(enumerate(code), enumerate(guess))
        ]
    )
    white = len([c1 for (i1, c1) in enumerate(code) if c1 in guess]) - black
    return str(white) + "\n" + str(black)