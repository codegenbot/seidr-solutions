def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = sum(min(c.count(b), a.count(b)) for a, c, b in zip(guess, code, set(guess + code)))
    return str(black) + "\n" + str(white)