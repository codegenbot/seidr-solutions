def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for char in code:
        code_count[ord(char) - ord("B")] += 1
    for i in range(4):
        if code[i] == guess[i]:
            code_count[ord(code[i]) - ord("B")] -= 1
            guess_count[ord(guess[i]) - ord("B")] -= 1
    white_peg = sum(min(count, 1) for count in code_count)
    black_peg = 4 - sum(1 for i in range(6) if min(code_count[i], guess_count[i]) > 0)
    return str(black_peg), str(white_peg)