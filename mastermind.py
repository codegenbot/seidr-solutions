def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    white_pegs = sum(
        min(count, guess.count(c)) for count, c in zip(code_count, "ABCDEF")
    )

    black_pegs = sum(
        count == 1 and guess.count(c) for count, c in zip(code_count, "ABCDEF")
    )

    return str(white_pegs) + "\n" + str(black_pegs)