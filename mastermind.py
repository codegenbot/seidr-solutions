def mastermind(code, guess):
    white = sum(1 for c in zip(guess, code) if c[0] == c[1])
    black = 4 - len(set(c) & set(code)) + white
    return str(black), str(white)