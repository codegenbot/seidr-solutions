def mastermind(code, guess):
    white = sum(c1 == c2 for c1, c2 in zip(guess, code))
    black = sum((c1 == c and i == j) for i, (c1, _) in enumerate(zip(guess, code)) for c, (_, c2) in enumerate(zip(code, guess)))
    return str(white), str(black)