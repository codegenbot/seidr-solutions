def mastermind(code, guess):
    white = sum(1 for c in zip(guess, code) if c[0] == c[1] and c[0] != c[1])
    black = sum(1 for c, d in zip(guess, code) if c == d)
    return str(black), str(white)