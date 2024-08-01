def mastermind(code, guess):
    code_counts = [0] * 6
    guess_counts = [0] * 6

    for char in code:
        if char != " ":
            code_counts[ord(char) - ord("B")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            code_counts[ord(code[i]) - ord("B")] -= 1
            guess_counts[ord(guess[i]) - ord("B")] -= 1

    white_pegs = sum(min(count, 4) for count in guess_counts)
    black_pegs = len([char for i, char in enumerate(code) if code[i] == guess[i]])

    return str(black_pegs), str(white_pegs)