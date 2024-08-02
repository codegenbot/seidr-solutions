def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - 65] += 1

    white_pegs = 0
    black_pegs = 0
    for i, c in enumerate(guess):
        if c == code[i]:
            black_pegs += 1
        elif code_counts[ord(c) - 65] > 0:
            white_pegs += 1
            code_counts[ord(c) - 65] -= 1

    return str(black_pegs) + "\n" + str(white_pegs)