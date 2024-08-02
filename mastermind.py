def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - 65] += 1
    white_peg_count = sum(
        [
            min(count, guess.count(c))
            for c, count in zip(map(chr, range(65, 71)), code_counts)
        ]
    )
    black_peg_count = sum(
        [
            min(code.count(c), guess.count(c))
            for c in map(chr, range(65, 71))
            if code_counts[ord(c) - 65] > 0
        ]
    )
    return str(black_peg_count) + "\n" + str(white_peg_count)