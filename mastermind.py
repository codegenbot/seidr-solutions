def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for char in code:
        code_count[ord(char) - ord("A")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            code_count[ord(code[i]) - ord("A")] -= 1
            guess_count[ord(guess[i]) - ord("A")] -= 1

    white_pegs = sum(min(count, 1) for count in code_count)
    black_pegs = 4 - sum(1 for i in range(4) if code[i] == guess[i])

    return str(black_pegs), str(white_pegs)