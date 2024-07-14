def mastermind(code, guess):
    code_counts = [0] * 6
    guess_counts = [0] * 6

    for char in code:
        code_counts[ord(char) - ord("B")] += 1
    for i, char in enumerate(guess):
        if char == code[i]:
            code_counts[ord(char) - ord("B")] -= 1
            guess_counts[ord(char) - ord("B")] -= 1
    white_peg = sum(
        1 for count in zip(code_counts, guess_counts) if count[0] > 0 and count[1] == 0
    )
    black_peg = len([i for i, char in enumerate(guess) if char == code[i]])

    return str(black_peg), str(white_peg)