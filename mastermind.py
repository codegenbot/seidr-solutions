def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("B")] += 1

    white_pegs = sum(
        min(count, guess.count(c)) for count, c in zip(code_counts, "BOYY")
    )
    black_pegs = sum(a == b for a, b in zip(code, guess))

    return str(4 - black_pegs) + "\n" + str(black_pegs)