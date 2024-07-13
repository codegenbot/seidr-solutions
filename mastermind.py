def mastermind(code, guess):
    black = sum(1 for c, g in zip(code, guess) if c == g)
    correct_positions = [i for i, (c, g) in enumerate(zip(code, guess)) if c == g]
    white = len([g for _, g in zip(code, guess) if g not in code or code.index(g) not in correct_positions])
    return str(black), str(white)