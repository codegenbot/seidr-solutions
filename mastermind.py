def mastermind(code, guess):
    black = sum([1 for c, g in zip(code, guess) if c == g])
    white = sum(min(c == g for c, g in zip(code, guess)) for _ in range(4)) - black
    return str(white), str(black)