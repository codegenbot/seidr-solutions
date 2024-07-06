def mastermind(code, guess):
    char_count = defaultdict(int)
    for c in code:
        char_count[c] += 1
    white = 0
    black = 0
    for i, g in enumerate(guess):
        if g == code[i]:
            white += 1
            char_count[g] -= 1
        elif g in char_count and char_count[g] > 0:
            black += 1
            char_count[g] -= 1
    return (white, black)