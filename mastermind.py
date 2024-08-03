def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = 4 - (sum(x == y for x, y in zip(guess, code)) - white)
    return str(white) + "\n" + str(black)