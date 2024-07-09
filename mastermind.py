def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white = len([c for c in set(guess) if c in code and c != code[guess.index(c)]]) - black
    return str(white), str(black)