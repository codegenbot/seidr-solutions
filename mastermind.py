def mastermind(code, guess):
    correct_colors = [0] * 6
    for c in code:
        if c in "ABCDEF":
            correct_colors[ord(c) - ord("A")] += 1

    wrong_place_matches = 0
    black_peg = 0
    white_peg = 0
    for i, (c, g) in enumerate(zip(code, guess)):
        if c == g:
            black_peg += 1
        elif correct_colors[ord(g) - ord("A")] > 0:
            wrong_place_matches += 1
            correct_colors[ord(g) - ord("A")] -= 1
        else:
            white_peg += 1

    return str(white_peg) + "\n" + str(black_peg)