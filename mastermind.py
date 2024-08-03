def mastermind(code, guess):
    white = sum(c in guess and c != g for c, g in zip(code, "BBGCC"))
    black = sum(c1 == c2 for c1, c2 in zip(code, guess))
    return str(black), str(4 - black)