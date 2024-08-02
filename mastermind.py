def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for char in code:
        code_count[ord(char) - ord("B")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            code_count[ord(code[i]) - ord("B")] -= 1
            guess_count[ord(guess[i]) - ord("B")] -= 1

    black_pegs = sum(
        [min(count, code_count.count(i)) for i, count in zip(code_count, guess_count)]
    )
    white_pegs = 4 - black_pegs

    return str(white_pegs) + "\n" + str(black_pegs)