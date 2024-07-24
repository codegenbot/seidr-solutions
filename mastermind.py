def mastermind(code, guess):
    color_count = {}
    for c in code + guess:
        if c not in color_count:
            color_count[c] = 0
        color_count[c] += 1

    black_pegs = sum(c1 == c2 and c1 in color_count for c1, c2 in zip(code, guess))

    white_pegs = 4 - black_pegs
    return str(white_pegs) + "\n" + str(black_pegs)