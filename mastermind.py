def mastermind(code, guess):
    white = sum(c1 == c2 for c1, c2 in zip(guess, code))
    black = len([c1, c2][0] for c1, c2 in zip(guess, code) if c1 == c2)
    return str(black), str(4 - black + white)