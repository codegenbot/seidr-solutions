def mastermind(code, guess):
    black = sum(1 for c, g in zip(code, guess) if c == g and code.index(c) == guess.index(g))
    white = len([c for c, g in zip(guess, code) if c != g]) - black
    return str(black), str(white)