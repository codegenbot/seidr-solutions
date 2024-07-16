def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0

    for c, g in zip(code, guess):
        if c == g:
            black_pegs += 1
        elif c in g:
            white_pegs += 1

    return str(black_pegs) + "\n" + str(4 - black_pegs)