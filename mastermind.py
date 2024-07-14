def mastermind(code, guess):
    white = sum(c in guess for c in code) if sum(c in guess for c in code) > 0 else 0
    black = sum(1 for c1, c2 in zip(code, guess) if c1 == c2 and code.index(c1) == guess.index(c2))
    return str(white), str(black)