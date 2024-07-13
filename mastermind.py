def mastermind(code, guess):
    black = sum(1 for c, g in zip(code, guess) if c == g and code.index(g) != guess.index(c))
    white = len(guess) - black
    return str(black), str(white)