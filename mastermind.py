def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = sum(min(a.count(b), c.count(b)) for a, c in zip(guess, [code]*2) for b in set(a))
    return str(black) + "\n" + str(4 - black)