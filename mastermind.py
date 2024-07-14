def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - 65] += 1

    guess_count = [0] * 6
    for char in guess:
        guess_count[ord(char) - 65] += 1

    black_pegs = sum(min(code_count[i], guess_count[i]) for i in range(6))
    white_pegs = sum(min(code_count[i], 4 - guess_count[i]) for i in range(6))

    return str(white_pegs), str(black_pegs)