def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    black_pegs = sum(
        [c == g and code_count[ord(g) - ord("A")] > 0 for c, g in zip(code, guess)]
    )

    white_pegs = sum([c == g for c, g in zip(code, guess)]) - black_pegs

    return str(white_pegs), str(black_pegs)