def mastermind(code, guess):
    black_pegs = 0
    correct_colors = 0

    for c1, c2 in zip(code, guess):
        if c1 == c2:
            black_pegs += 1
        elif c1 in c2:
            correct_colors += min(c1.count(c2), code.count(c1))

    white_pegs = sum((c1 in c2) and (c1 != c2) for c1, c2 in zip(code, guess)) - black_pegs

    return str(black_pegs) + "\n" + str(white_pegs)