def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("A")] += 1

    correct_colors = sum(code_counts)
    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)
    white_pegs = correct_colors - black_pegs

    return str(white_pegs) + "\n" + str(black_pegs)