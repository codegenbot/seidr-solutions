def mastermind(code, guess):
    white = sum(1 for c in zip(guess, code) if c[0] == c[1])
    black = sum(1 for i, (c1, c2) in enumerate(zip(guess, code)) if c1 == c2)
    return str(black), str(white)