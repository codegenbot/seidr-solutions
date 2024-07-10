def mastermind(code, guess):
    correct_colors = [c1 == c2 for c1, c2 in zip(code, guess)]
    black_pegs = sum(correct_colors)

    white_pegs = 0
    for i, (c1, c2) in enumerate(zip(code, guess)):
        if c1 == c2 and not correct_colors[i]:
            white_pegs += 1

    return str(white_pegs), str(black_pegs)