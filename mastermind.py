def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    for c, g in zip(code, guess):
        if c == g:
            black_pegs += 1
        elif c not in guess[:guess.index(g)] and c in g:
            white_pegs += 1

    return str(black_pegs) + "\n" + str(4 - black_pegs)