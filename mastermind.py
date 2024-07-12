def mastermind(code, guess):
    black = sum([a == b for a, b in zip(code, guess)])
    white = 4 - black
    return str(white) + "\n" + str(black)