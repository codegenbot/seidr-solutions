def mastermind(code, guess):
    black = sum(1 for a, b in zip(code, guess) if a == b)
    white = sum(
        min(c.count(d), e.count(d)) for c, d in zip(code, guess) for e in [code, guess]
    )
    return str(black) + "\n" + str(white - black)