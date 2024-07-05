def mastermind(code, guess):
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = sum(1 for c in guess if c in code and c != guess[code.index(c)])
    return str(white_pegs), str(black_pegs)