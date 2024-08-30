def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for c in code:
        code_count[ord(c) - ord("B")] += 1
    for g in guess:
        guess_count[ord(g) - ord("B")] += 1

    black_peg = sum(min(code_count[i], guess_count[i]) for i in range(6))
    white_peg = (
        sum(min(code_count[i], guess_count[i] - code_count[i]) for i in range(6))
        - black_peg
    )

    return str(white_peg), str(black_peg)