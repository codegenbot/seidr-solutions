def mastermind(code, guess):
    white = sum(1 for a, b in zip(guess, code) if a == b)
    black = 4 - sum(1 for a in code if a in guess)
    return str(black), str(white)