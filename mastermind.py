def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(
        (c1 == c2) and (guess.index(c1) < guess.index(c2))
        for c1, c2 in zip(code, guess)
    )
    return str(white), str(black)