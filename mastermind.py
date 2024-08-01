def mastermind(code, guess):
    black = sum(a == b for a, b in zip(code, guess))
    white = sum(
        min(c.count(d), e.count(d)) for c, d, e in zip([code, guess], [guess, code])
    )
    return str(white - black), str(black)