def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white = len([c for c in guess if c in code]) - black
    return str(min(white, 4)), str(black)