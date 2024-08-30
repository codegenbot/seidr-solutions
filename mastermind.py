def mastermind(code, guess):
    black = sum(i[0] == i[1] for i in zip(code, guess))
    white = sum(c1 == c2 for c1, c2 in zip(guess, code)) - black
    return black, white