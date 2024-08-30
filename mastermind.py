def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = sum(
        min(c.count(d), e.count(d)) for d in set(guess) for c, e in [(code, guess)]
    )
    return str(black) + "\n" + str(white)