def mastermind(code, guess):
    white = sum(c in code for c in guess) - sum(
        (c1 == c2) for c1, c2 in zip(code, guess)
    )
    black = sum(
        (c1 == c2) and (code.index(c1) != guess.index(c1))
        for c1, c2 in zip(code, guess)
    )
    return str(white), str(black)