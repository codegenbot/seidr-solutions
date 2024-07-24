def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1
    guess_count = [0] * 6
    for g in guess:
        guess_count[ord(g) - ord("B")] += 1

    white_pegs = sum(min(code_count[i], guess_count[i]) for i in range(6))

    black_pegs = 4 - sum(max(0, code_count[i] - guess_count[i]) for i in range(6))

    return str(black_pegs) + "\n" + str(white_pegs)