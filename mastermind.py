def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1
    guess_count = [0] * 6
    for g in guess:
        guess_count[ord(g) - ord("B")] += 1

    black_peg = sum(min(count, code_count[i]) for i, count in enumerate(guess_count))

    white_peg = 4 - black_peg
    return str(white_peg), str(black_peg)