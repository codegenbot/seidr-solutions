def mastermind(code, guess):
    code_counts = [0] * 6
    guess_counts = [0] * 6

    for i in range(4):
        code_counts[ord(code[i]) - ord("A")] += 1
        guess_counts[ord(guess[i]) - ord("A")] += 1

    black_pegs = sum(
        min(count, code_count) for count, code_count in zip(guess_counts, code_counts)
    )

    white_pegs = 4 - black_pegs

    return str(white_pegs), str(black_pegs)