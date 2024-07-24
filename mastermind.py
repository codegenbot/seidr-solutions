def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    for c, g in zip(code, guess):
        if c == g:
            black_pegs += 1
        elif g in code:
            white_pegs += 1
    return str(black_pegs), str(white_pegs)