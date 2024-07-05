def mastermind(code, guess):
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    code_count = [code.count(g) for g in guess]
    white_pegs = sum(min(count, 1) for count in code_count)
    return str(white_pegs - black_pegs), str(black_pegs)