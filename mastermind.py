def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1
    black_peg = sum(
        [c == g and code_count[ord(g) - ord("A")] > 0 for c, g in zip(code, guess)]
    )
    white_peg = sum([c == g for c, g in zip(code, guess)]) - black_peg
    return str(white_peg) + "\n" + str(black_peg)