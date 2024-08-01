def mastermind(code, guess):
    black = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white = sum(min(a.count(c), b.count(c)) for a, b, c in zip(*[code, guess]))
    return str(white) + "\n" + str(black)