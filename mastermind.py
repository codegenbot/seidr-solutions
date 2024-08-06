def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(a == b for a, b in zip(code, guess))
    return str(4 - black), str(black)