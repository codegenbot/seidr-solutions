def mastermind(code, guess):
    white = sum(1 for c in code if c in guess) - sum(1 for c1, c2 in zip(guess, code) if c1 == c2)
    black = sum((c1 == c2) and (c1 in code) for c1, c2 in zip(guess, code))
    return str(black), str(white)