def mastermind(code, guess):
    white = sum(c in guess and c != g for g, c in zip(code, "BOYG"))
    black = sum(g == c for g, c in zip(code, guess))
    return str(white) + "\n" + str(black)