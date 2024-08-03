def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for char in code:
        code_count[ord(char) - ord("B")] += 1
    for i in range(4):
        if code[i] == guess[i]:
            code_count[ord(code[i]) - ord("B")] -= 1
            guess_count[ord(guess[i]) - ord("B")] -= 1

    white_pegs = sum(min(count, 4) for count in code_count)
    black_pegs = 4 - sum(
        1 for i in range(6) if code_count[i] > 0 and guess_count[i] > 0
    )

    return str(black_pegs), str(white_pegs)