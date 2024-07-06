def mastermind(code, guess):
    char_count = {}
    for c in code:
        if c not in char_count:
            char_count[c] = 0
        char_count[c] += 1

    white_pegs = 0
    black_pegs = 0
    for i, g in enumerate(guess):
        if g not in char_count:
            continue
        if char_count[g] > 0:
            white_pegs += 1
            char_count[g] -= 1
        else:
            black_pegs += 1

    return (white_pegs, black_pegs)