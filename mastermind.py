def mastermind(code, guess):
    code_counts = [0] * 6
    for char in code:
        code_counts[ord(char) - ord("B")] += 1

    white_pegs = sum(
        min(count, guess.count(char)) for count, char in zip(code_counts, "BOYGB")
    )
    black_pegs = sum(a == b for a, b in zip(code, guess))

    return str(black_pegs) + "\n" + str(4 - black_pegs)