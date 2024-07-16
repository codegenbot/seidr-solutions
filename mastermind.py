def mastermind(code, guess):
    black_count = sum([1 for c, g in zip(code, guess) if c == g])
    white_count = 4 - black_count
    return black_count, white_count