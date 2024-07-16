def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white = sum(min(c1.count(c), code.count(c)) for c in set(guess))
    return str(white - black), str(black)