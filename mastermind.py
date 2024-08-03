def mastermind(code, guess):
    white = sum(1 for a, b in zip(guess, code) if a == b)
    black = sum(min(map(lambda x: x.count(a), [code, guess]).count(b), [0, 1]))
    return str(black) + "\n" + str(white)