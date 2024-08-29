def mastermind(code, guess):
    code_counts = [0] * 6
    guess_counts = [0] * 6
    black_pegs = 0
    white_pegs = 0

    for char in code:
        code_counts[ord(char) - ord("B")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        else:
            code_counts[ord(code[i]) - ord("B")] -= 1
            guess_counts[ord(guess[i]) - ord("B")] -= 1
            white_pegs += min(code_counts[ord(char) - ord("B")], 0)

    black_pegs = sum([min(count, guess_counts[ord(char) - ord("B")]) for char in code if count > 0])

    return str(black_pegs), str(white_pegs)