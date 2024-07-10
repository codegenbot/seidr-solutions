def mastermind(code, guess):
    black = 0
    white = 4 - sum(1 for a, b in zip(guess, code) if a == b)
    return str(black) + "\n" + str(white)