def mastermind(code, guess):
    white = sum(c1 == c2 for c1, c2 in zip(guess, code))
    black = 4 - sum(1 for i, (c1, c2) in enumerate(zip(guess, code)) if c1 == c2)
    return str(black), str(white)