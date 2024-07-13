def mastermind(code, guess):
    code_counts = [0] * 6
    guess_counts = [0] * 6

    for char in code:
        code_counts[ord(char) - ord("B")] += 1
    for char in guess:
        guess_counts[ord(char) - ord("B")] += 1

    white_peg = sum(min(c, g) for c, g in zip(code_counts, guess_counts))
    black_peg = sum(1 for i in range(4) if code[i] == guess[i])

    return str(black_peg), str(white_peg)