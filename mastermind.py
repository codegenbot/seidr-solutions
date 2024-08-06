def mastermind(code, guess):
    white = sum(1 for c in zip(code, guess) if c[0] == c[1])
    black = len([c for c in code if c in guess])
    return str(black), str(len(guess) - black)