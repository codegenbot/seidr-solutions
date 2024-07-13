def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for char in code:
        code_count[ord(char) - ord("B")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            code_count[ord(code[i]) - ord("B")] -= 1
            guess_count[ord(guess[i]) - ord("B")] -= 1

    white_peg = sum(min(c, g) for c, g in zip(code_count, guess_count))

    black_peg = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1

    return str(black_peg), str(white_peg)