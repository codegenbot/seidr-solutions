def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white = len(set([c for c in guess if c in code]) - set(code))
    return str(white), str(black)