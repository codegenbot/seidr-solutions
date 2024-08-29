def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0

    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("A")] += 1

    guess_count = [0] * 6
    for char in guess:
        guess_count[ord(char) - ord("A")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif (
            code_count[ord(code[i]) - ord("A")] > 0
            and code_count[ord(code[i]) - ord("A")]
            <= guess_count[ord(code[i]) - ord("A")]
        ):
            white_pegs += 1
            code_count[ord(code[i]) - ord("A")] -= 1

    return str(black_pegs) + "\n" + str(white_pegs)