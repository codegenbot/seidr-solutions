def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for char in code:
        code_count[ord(char) - ord("A")] += 1

    for char in guess:
        guess_count[ord(char) - ord("A")] += 1

    white_peg_count = sum(min(code_count[i], guess_count[i]) for i in range(6))
    black_peg_count = sum(
        min(code_count[i], guess_count[i]) - code_count[i] for i in range(6)
    )

    return str(white_peg_count) + "\n" + str(black_peg_count)