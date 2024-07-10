def mastermind(code, guess):
    white = sum(c in code and c != g for c, g in zip(guess, "XXXX"))
    black = sum(c == g for c, g in zip(code, guess))
    return str(black) + "\n" + str(4 - black)