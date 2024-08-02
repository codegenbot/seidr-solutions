def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("A")] += 1

    white_pegs = sum(
        min(count, guess.count(c)) for count, c in zip(code_counts, "ABCDEF")
    )
    black_pegs = sum(code[i] == guess[i] for i in range(4))

    return str(black_pegs) + "\n" + str(4 - black_pegs)