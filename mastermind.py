def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("A")] += 1

    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)

    white_pegs = sum(1 for a, b in zip(code, guess) if a == b and a != b)

    return str(black_pegs) + "\n" + str(white_pegs)