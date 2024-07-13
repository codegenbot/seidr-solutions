def mastermind(code, guess):
    code_counts = [0] * 6
    guess_counts = [0] * 6
    white_peg = 0
    black_peg = 0

    for char in code:
        code_counts[ord(char) - ord("B")] += 1
    for char in guess:
        guess_counts[ord(char) - ord("B")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        else:
            white_peg += min(code_counts[ord(char) - ord("B")] for char in code if char == guess[i])
            code_counts[ord(code[i]) - ord("B")] -= 1
            guess_counts[ord(guess[i]) - ord("B")] -= 1

    white_peg = sum(min(c, g) for c, g in zip(code_counts, guess_counts))

    return str(black_peg), str(white_peg)