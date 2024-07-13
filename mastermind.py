def mastermind(code, guess):
    black = sum(1 for c in code if c == g) for g in set(guess))
    white = len(set(guess)) - black
    return str(black), str(white)