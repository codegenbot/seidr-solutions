def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = sum(1 for a in set(guess) if code.count(a) > 0 and guess.index(a) != code.index(a))
    return str(black) + "\n" + str(white)