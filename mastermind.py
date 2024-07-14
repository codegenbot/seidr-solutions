def mastermind(code, guess):
    code_counts = [0] * 6
    guess_counts = [0] * 6
    white_pegs = 0
    black_pegs = 0

    for char in code:
        code_counts[ord(char) - ord("A")] += 1
    for char in guess:
        guess_counts[ord(char) - ord("A")] += 1

    for i in range(6):
        if code_counts[i] > 0 and guess_counts[i] > 0:
            black_pegs += min(code_counts[i], guess_counts[i])
        elif code_counts[i] > 0 or guess_counts[i] > 0:
            white_pegs += max(code_counts[i], guess_counts[i]) - min(
                code_counts[i], guess_counts[i]
            )

    return str(white_pegs) + "\n" + str(black_pegs)