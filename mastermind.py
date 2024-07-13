def mastermind(code, guess):
    black = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white = len(set(guess)) - black
    return str(white) + "\n" + str(black)