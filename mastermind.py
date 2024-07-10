for c, g in zip(code, guess):
    if c == g:
        black_pegs += 1
    elif code.count(g) > 0:
        white_pegs += 1