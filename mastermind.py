def mastermind(code, guess):
    correct_chars = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = 4 - correct_chars
    black_pegs = 4 - (6 - correct_chars)
    return str(black_pegs), str(white_pegs)