def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    white_pegs = sum(
        min(count, guess.count(c))
        for count, c in zip(code_count, "ABCDEFGHIJKLMNOPQRSTUVWXYZ")
    )
    black_pegs = (
        sum(
            count == guess.count(c)
            for count, c in zip(code_count, "ABCDEFGHIJKLMNOPQRSTUVWXYZ")
        )
        - white_pegs
    )
    return str(black_pegs), str(white_pegs)