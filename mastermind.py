def mastermind(code, guess):
    white = sum([1 for c in zip(code, guess) if c[0] == c[1]])
    black = 4 - len(set(guess) & set(code))
    return str(white), str(black)