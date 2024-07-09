def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("B")] += 1

    black_peg_count = sum(
        1 if count == count2 else 0 
        for count, count2 in zip(code_counts, [c.count(c) for c in guess])
    )

    white_peg_count = sum(
        min(count - count2, 0)
        for count, count2 in zip(code_counts, [c.count(c) for c in guess])
    )

    return str(white_peg_count), str(black_peg_count)