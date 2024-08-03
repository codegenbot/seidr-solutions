def mastermind(code, guess):
    white = sum(1 for a, b in zip(code, guess) if a == b)
    black = sum(min(c.count(d), e.count(d)) for d, (c, e) in zip(guess, [code, guess]))
    return str(black) + "\n" + str(4 - black + white)