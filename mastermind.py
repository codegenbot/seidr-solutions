def mastermind(code, guess):
    white = sum(1 for c in zip(guess, code) if c[0] == c[1])
    black = len([c for c in zip(guess, code) if c[0] == c[1]])
    return str(black), str(4 - black)