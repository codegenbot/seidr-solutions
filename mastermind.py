def mastermind(code, guess):
    black = sum(1 for c, g in zip(code, guess) if c == g)
    white = sum(1 for c in set(guess) if c in code and c != next((g for g in code if c == g), None))
    return str(black) + ' ' + str(white)