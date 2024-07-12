def mastermind(code, guess):
    white_pegs = sum(c in code for c in guess)
    black_pegs = sum(1 for i, (c1, c2) in enumerate(zip(code, guess)) if c1 == c2)
    return str(black_pegs), str(white_pegs)