def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("B")] += 1

    black_pegs = sum(
        c1 == c2 and i < j for i, c1 in enumerate(guess) for j, c2 in enumerate(code)
    ).count(True)

    white_pegs = (
        sum(min(code_counts.count(c), guess.count(c)) for c in set(guess)) - black_pegs
    )

    return str(white_pegs), str(black_pegs)