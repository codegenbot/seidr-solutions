def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("A")] += 1
    white_pegs = sum(
        [
            min(count, count2)
            for count, count2 in zip(code_counts, [c.count(c2) for c2 in guess])
        ]
    )
    black_pegs = sum(
        [
            min(count, count2)
            for count, count2 in zip(code_counts, [c2.count(c) for c2 in guess])
        ]
    )
    return str(black_pegs), str(white_pegs)