def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white = sum(1 for c in set(guess) if c in code and c != guess[code.index(c)])
    return str(white - black), str(black)