def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = len(set(guess) & set(code)) - black
    return str(black) + "\n" + str(white)