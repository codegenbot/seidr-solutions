def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for c in code:
        code_count[ord(c) - ord("B")] += 1
    for g in guess:
        guess_count[ord(g) - ord("B")] += 1

    white_pegs = sum(min(code_count, guess_count))
    black_pegs = sum((a == b) and min(a, b) for a, b in zip(code_count, guess_count))

    return str(black_pegs), str(white_pegs)