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
        [
            a == b and min(count, guess.count(c))
            for a, count in zip(code_count, [ord(c) - ord("A") for c in code])
        ]
    )

    return str(white_pegs) + "\n" + str(black_pegs)