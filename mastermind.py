def mastermind(code, guess):
    black = sum(
        c1 == c2 and i1 == i2
        for i1, c1 in enumerate(guess)
        for i2, c2 in enumerate(code)
    )
    white = sum(1 for c in code if c in guess) - black
    return str(black), str(white)