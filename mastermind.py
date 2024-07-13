def mastermind(code, guess):
    code_counts = [0] * 6
    for char in code:
        code_counts[ord(char) - ord("A")] += 1

    white_pegs = sum(
        min(count, guess.count(char)) for count, char in zip(code_counts, "ABCDEF")
    )

    black_pegs = sum(1 for i in range(len(guess)) if code[i] == guess[i])

    return str(black_pegs) + "\n" + str(4 - black_pegs)