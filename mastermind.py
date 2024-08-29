def mastermind(code, guess):
    code_counts = [0] * 6
    guess_counts = [0] * 6

    for char in code:
        code_counts[ord(char) - ord("B")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            code_counts[ord(code[i]) - ord("B")] -= 1
            guess_counts[ord(guess[i]) - ord("B")] -= 1

    white_pegs = sum([min(count, guess_counts[ord(char) - ord("B")]) for char in code])

    black_pegs = 4 - sum(code_counts)

    return str(black_pegs), str(white_pegs)