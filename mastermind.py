def mastermind(code, guess):
    white = sum(c in guess and c != g for c, g in zip(code, guess))
    black = sum(c1 == c2 for c1, c2 in zip(code, guess)) - white
    return str(black) + "\n" + str(white)