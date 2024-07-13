def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6
    white_peg = 0
    black_peg = 0

    for char in code:
        code_count[ord(char) - ord("B")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        else:
            code_count[ord(code[i]) - ord("B")] -= 1
            guess_count[ord(guess[i]) - ord("B")] -= 1
            white_peg += min(code_count[ord(char) - ord("B")] for char in code if char == guess[i])

    white_peg = 0
    for i, char in enumerate(guess):
        if char == code[i]:
            black_peg += 1
        elif char in code:
            white_peg += 1

    return str(black_peg), str(white_peg)