def mastermind(code, guess):
    black = sum(1 for ((i1, c1), (i2, c2)) in zip(enumerate(code), enumerate(guess)) if c1 == c2)
    white = sum(min(code.count(c), guess.count(c)) for c in set(guess) if code.count(c) > 0 and guess.count(c) > 0)
    return str(black) + "\n" + str(white)