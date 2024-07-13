def mastermind(code, guess):
    black = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white = 4 - black
    return str(white) + "\n" + str(black)