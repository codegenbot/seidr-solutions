def mastermind(code, guess):
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = len([c for c in code if c in guess and c != guess[guess.index(c)]])
    return str(black_pegs), str(white_pegs)