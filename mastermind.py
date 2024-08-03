def mastermind(code, guess):
    code_counts = [0] * 6
    for char in code:
        code_counts[ord(char) - ord("B")] += 1

    white_pegs = sum(
        [min(code_counts[i], guess.count(chr(ord("A") + i))) for i in range(6)]
    )

    black_pegs = sum(
        [
            a
            for a, b in zip(
                code_counts, [guess.count(chr(ord("A") + i)) for i in range(6)]
            )
            if a == b
        ]
    )

    return str(black_pegs) + "\n" + str(4 - black_pegs)