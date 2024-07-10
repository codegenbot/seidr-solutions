def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(1 for i, (c1, c2) in enumerate(zip(code, guess)) if c1 == c2)
    return str(white), str(black)