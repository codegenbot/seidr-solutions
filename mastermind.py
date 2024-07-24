def mastermind(code, guess):
    white = sum(c in guess for c in code) - 4
    black = sum(
        (c1 == c2) and (i1 // 6 == i2 // 6)
        for ((i1, c1), (i2, c2)) in zip(enumerate(code), enumerate(guess))
    )
    return white, black