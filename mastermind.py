def mastermind(code, guess):
    black_count = sum([c1 == c2 for c1, c2 in zip(code, guess)])
    white_count = sum(c1 == c2 for c1, c2 in zip(code, guess)) - black_count
    return black_count, white_count