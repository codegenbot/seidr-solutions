def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    white_pegs = sum(
        [min(code_count[i], guess.count(chr(i + ord("A")))) for i in range(6)]
    )

    black_pegs = sum(
        [
            a
            for a, b in zip(
                code_count, [guess.count(chr(i + ord("A"))) for i in range(6)]
            )
            if a == b
        ]
    )

    return str(black_pegs) + "\n" + str(4 - black_pegs)