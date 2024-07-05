```
def mastermind(code, guess):
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = sum(1 for c in code if c in guess and c != g)
    return str(white_pegs), str(black_pegs)