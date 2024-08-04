def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    white_pegs = sum(
        min(count, guess.count(c))
        for c, count in zip(map(chr, range(ord("B"), ord("G") + 1)), code_count)
    )

    black_pegs = len([c for c in code if code.index(c) == guess.index(c)])

    return str(black_pegs) + "\n" + str(4 - black_pegs)