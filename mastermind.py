def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    white_pegs = sum(
        [
            min(count, guess.count(c))
            for c, count in zip(map(chr, range(ord("A"), ord("G") + 1)), code_count)
        ]
    )

    black_pegs = sum(
        [count if c == g else 0 for c, count in zip(code_count, code) for g in guess]
    )

    return str(white_pegs), str(black_pegs)