def mastermind(code, guess):
    black = sum(c1 == c2 and p1 == p2 for c1, p1 in zip(code, guess) if c1 == c2)
    white = sum(1 for c1, p1 in zip(code, guess) if c1 == c2 and p1 != p2) - black
    return str(black), str(white)