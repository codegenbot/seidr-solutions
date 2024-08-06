def mastermind(code, guess):
    white = sum(c1 == c2 for c1, c2 in zip(guess, code)) - sum(
        (c1, c2) in zip(guess, code) for c1, c2 in zip(guess, code)
    )
    black = sum((c1, c2) in zip(guess, code) for c1, c2 in zip(guess, code))
    return str(black), str(white)