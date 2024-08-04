def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    white_pegs = 0
    black_pegs = 0
    for i, (c, g) in enumerate(zip(code, guess)):
        if c == g:
            black_pegs += 1
            code_count[ord(g) - ord("B")] -= 1
        elif code_count[ord(g) - ord("B")] > 0:
            white_pegs += 1
            code_count[ord(g) - ord("B")] -= 1

    return str(white_pegs) + "\n" + str(black_pegs)