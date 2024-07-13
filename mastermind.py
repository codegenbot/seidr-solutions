def mastermind(code, guess):
    white = sum(c in guess for c in set(guess))
    black = sum(1 for i, c in enumerate(guess) if code[i] == c)
    return str(black), str(white)