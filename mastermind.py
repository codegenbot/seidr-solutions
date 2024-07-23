def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("A")] += 1

    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)

    white_pegs = 4 - black_pegs
    black_pos = 0
    for a, b in zip(code, guess):
        if a == b:
            black_pos += 1
        elif code_counts[ord(b) - ord("A")] > 0:
            white_pegs -= 1
            code_counts[ord(b) - ord("A")] -= 1

    return str(black_pegs) + "\n" + str(white_pegs)