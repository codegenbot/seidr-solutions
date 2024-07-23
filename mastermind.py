def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("B")] += 1

    white_pegs = sum(
        min(count, guess.count(c)) for count, c in zip(code_counts, "BOYYY")
    )
    black_pegs = sum(
        count == guess.count(c) and count > 0 for count, c in zip(code_counts, "BOYYY")
    )

    return str(black_pegs) + "\n" + str(4 - black_pegs)