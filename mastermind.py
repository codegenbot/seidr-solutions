def mastermind(code, guess):
    black = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white = sum(min(c1.count(c), code.count(c)) for c in set(guess))
    return str(white) + "\n" + str(black)