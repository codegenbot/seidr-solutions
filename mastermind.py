def mastermind(code, guess):
    black = sum(1 for a, b in zip(code, guess) if a == b)
    white = sum(
        min(c.count(d), e.count(d))
        for d in set(guess)
        for c, e in [(code, code), (guess, guess)]
    )
    return str(black) + "\n" + str(4 - black)