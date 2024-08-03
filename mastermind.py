def mastermind(code, guess):
    black = sum(c1 == c2 for c1, c2 in zip(code, guess) if c1 == c2)
    white = sum(min(guess.count(c), code.count(c)) for c in set(guess))
    return str(black) + "\n" + str(white)