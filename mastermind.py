def mastermind(code, guess):
    black = sum((c1 == c2) for c1, c2 in zip(code, guess))
    white = sum(c in guess for c in code) - black
    return str(white), str(black)