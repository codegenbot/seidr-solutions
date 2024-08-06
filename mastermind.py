def mastermind(code, guess):
    white = sum(1 for c in zip(code, guess) if c[0] == c[1])
    black = len([c for c in zip(code, guess) if c[0] == c[1]][0].lstrip(c[1]))
    return f"{len(guess) - black}, {black}"