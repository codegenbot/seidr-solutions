def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(1 for i, c1 in enumerate(code) if c1 == guess[i])
    return str(black), str(white)