def mastermind(code, guess):
    white = sum(1 for a, b in zip(guess, code) if a == b)
    black = 4 - sum(1 for c in code if c in guess) + white
    return str(black), str(white)