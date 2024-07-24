def mastermind(code, guess):
    black = sum([c1 == c2 for c1, c2 in zip(guess, code)])
    white = 4 - black
    return str(black), str(white)