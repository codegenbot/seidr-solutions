def mastermind(code, guess):
    code_counts = [0] * 6
    for char in code:
        code_counts[ord(char) - ord("B")] += 1

    white_pegs = sum(
        min(count, guess.count(char)) for count, char in zip(code_counts, "BOY")
    )

    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)

    return str(black_pegs) + "\n" + str(4 - black_pegs)