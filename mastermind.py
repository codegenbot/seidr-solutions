def mastermind(code, guess):
    white = sum(min((c in guess).count(True) for c in code))
    black = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    return str(white), str(black)