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
    black_pegs = 4 - white_pegs

    return str(black_pegs) + "\n" + str(white_pegs)