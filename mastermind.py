def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = sum(min(guess.count(c), code.count(c)) for c in set(guess))
    return str(white - black), str(black)