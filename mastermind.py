def mastermind(code, guess):
    black = sum([1 for c in zip(code, guess) if c[0] == c[1]])
    white = 4 - black
    return str(white), str(black)