def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_count = [0] * 6

    # Count colors in code
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    # Count colors in guess and update black/white pegs
    for i, g in enumerate(guess):
        if g == code[i]:
            black_pegs += 1
        elif code_count[ord(g) - ord("A")] > 0:
            white_pegs += 1
            code_count[ord(g) - ord("A")] -= 1

    return str(black_pegs) + "\n" + str(white_pegs)