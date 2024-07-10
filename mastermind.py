def mastermind(code, guess):
    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)
    white_pegs = len([c for c in code if c in guess]) - black_pegs
    return str(black_pegs), str(white_pegs)