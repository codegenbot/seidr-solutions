def mastermind(code, guess):
    black = sum(1 for c, g in zip(code, guess) if c == g)
    white = len([c for c in code if c in guess]) - black
    return str(black), str(white)