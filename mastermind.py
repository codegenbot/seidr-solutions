def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(c == g and i == j for i, (c, g) in enumerate(zip(code, guess)))
    return str(white), str(black)