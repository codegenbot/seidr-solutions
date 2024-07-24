def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - 65] += 1
    black_pegs = sum([c == g and b > 0 for c, g in zip(code, guess)].count(True))
    white_pegs = sum(
        min(b, g) for b, g in zip(code_count, [code.count(c) for c in guess])
    )
    return str(white_pegs) + "\n" + str(black_pegs)