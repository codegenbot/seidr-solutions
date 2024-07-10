def mastermind(code, guess):
    black = 0
    white = 0
    for c in set(code):
        black += min(code.count(c), guess.count(c))
    white = sum(min(code.count(c), 0) for c in set(guess) if code.count(c) > 0)
    return str(black) + "\n" + str(white)