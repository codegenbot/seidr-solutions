def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("B")] += 1
    black_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white_pegs = sum(
        min(count, guess.count(c)) for count, c in zip(code_counts, "BOYGO")
    )
    return str(black_pegs), str(white_pegs)