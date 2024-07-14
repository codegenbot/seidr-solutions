def mastermind(code, guess):
    white = sum(c in code and c != g for c, g in zip(guess, code))
    black = sum(g == c for c, g in zip(guess, code)) - white
    return str(black) + "\n" + str(white)