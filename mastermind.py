def mastermind(code, guess):
    black = sum(1 for c, g in zip(code, guess) if c == g)
    white = sum(min(code.count(c), guess.count(c)) - (c == g) for c in set(guess))
    return str(white) + "\n" + str(black)