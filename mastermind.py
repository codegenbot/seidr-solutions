def mastermind(code, guess):
    white = sum(c in guess for c in set(guess))
    black = sum(1 for i, j in zip(code, guess) if i == j)
    return str(black), str(white)