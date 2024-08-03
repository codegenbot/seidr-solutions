def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("O")] += 1
    black_pegs = sum(
        [
            min(count, count2)
            for count, count2 in zip(code_count, [c.count(c2) for c2 in guess])
        ]
    )
    white_pegs = (
        sum(
            [
                min(count, count2)
                for count, count2 in zip(code_count, [c.count(c2) for c2 in guess])
            ]
        )
        - black_pegs
    )
    return str(white_pegs), str(black_pegs)