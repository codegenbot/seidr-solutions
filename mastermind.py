def mastermind(code, guess):
    white = sum([1 for c in zip(code, guess) if c[0] == c[1]])
    black = 4 - sum(1 for c in code if c not in guess)
    return str(black), str(white)