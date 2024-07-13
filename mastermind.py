```
def mastermind(code, guess):
    black_pegs = sum(1 for i, (c1, c2) in enumerate(zip(code, guess)) if c1 == c2)
    white_pegs = len([c for c in guess if c in code]) - black_pegs
    return str(black_pegs), str(white_pegs)