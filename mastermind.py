def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white = 4 - black
    return str(black) + "\n" + str(white)