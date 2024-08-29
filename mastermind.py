def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip(guess, code) if c1 == c2)
    white = len([c for c in code if c in guess]) - black
    return str(black), str(white)