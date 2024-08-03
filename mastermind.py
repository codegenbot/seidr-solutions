def get_peg_count(code, guess):
    code_counts = [0] * 6
    for char in code:
        code_counts[ord(char) - ord("B")] += 1
    black_pegs = sum(
        [
            min(count, guess.count(char))
            for _, count, char in zip(range(6), code_counts, "BOYYG")
        ]
    )

    white_pegs = sum(
        min(a, b) for a, b in zip(code_counts, [guess.count(char) for char in "BOYYG"])
    )
    return str(4 - black_pegs), str(black_pegs)