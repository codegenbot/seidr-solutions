def mastermind(code, guess):
    white = sum(c1 == c2 for c1, c2 in zip(guess, code))
    black = len([c for c1, c2 in zip(guess, code) if c1 == c2 and c1 in code[:4]])
    return str(white), str(black)