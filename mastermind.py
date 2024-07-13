def mastermind(code, guess):
    white = sum(c == g and c != code[i] for i, (c, g) in enumerate(zip(code, guess)))
    black = sum(1 for c, g in zip(code, guess) if c == g)
    return str(white), str(black)