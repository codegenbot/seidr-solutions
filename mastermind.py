def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for char in code:
        code_count[ord(char) - ord("A")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            code_count[ord(code[i]) - ord("A")] -= 1
            guess_count[ord(guess[i]) - ord("A")] -= 1
        else:
            code_count[ord(guess[i]) - ord("A")] += 1

    black_pegs = sum(1 for i in range(6) if code_count[i] == 0)
    white_pegs = 4 - black_pegs

    return str(white_pegs), str(black_pegs)