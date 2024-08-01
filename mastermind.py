def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    white_pegs = sum(
        min(count, guess.count(c)) for count, c in zip(code_count, "ABCDEF")
    )

    black_pegs = sum(code == g and c != g for c, g in zip(code, guess)).count(True)

    return str(black_pegs) + "\n" + str(white_pegs)