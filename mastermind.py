def mastermind(code, guess):
    code_counts = [0] * 6
    for char in code:
        code_counts[ord(char) - ord("B")] += 1

    white_pegs = sum(
        min(count, guess.count(char))
        for char, count in zip("ABCDEFGHIJKLMNOPQRSTUVWXYZ", code_counts)
    )

    black_pegs = sum(code[i] == guess[i] for i in range(4))

    return str(black_pegs), str(white_pegs)