def mastermind(code, guess):
    code_counts = [0] * 6
    for char in code:
        code_counts[int(char) - ord("B")] += 1

    black_pegs = sum((code == c for c in guess).map(int))
    white_pegs = sum(min(code_counts, (c.count(c) for c in guess)) for c in guess)

    return str(black_pegs), str(white_pegs)