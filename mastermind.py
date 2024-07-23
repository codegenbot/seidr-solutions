def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("A")] += 1

    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)

    white_pegs = 0
    for count, c in zip(code_counts, "ABCDEF"):
        correct_color = min(count, guess.count(c))
        white_pegs += correct_color - (a == b and 1 for a, b in zip(code, guess) if a == c).count(1)

    return str(black_pegs) + "\n" + str(white_pegs)