def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white = len([c for c in code if c in guess]) - black
    return str(min(4, white)), str(black)