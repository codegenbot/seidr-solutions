def mastermind(code, guess):
    white = sum(c == g for c, g in zip(str(code), str(guess))) - black
    black = sum(c1 == c2 for c1, c2 in zip(code, guess))
    return black, white