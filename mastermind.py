def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    for c, g in zip(map(str, code), map(str, guess)):
        if c == g:
            black_pegs += 1
        elif c in g and g.count(c) > 0:
            white_pegs += 1

    return str(black_pegs) + "\n" + str(4 - black_pegs)