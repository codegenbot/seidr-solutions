def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    guess_count = [0] * 6
    for c in guess:
        guess_count[ord(c) - ord("A")] += 1

    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)
    white_pegs = sum(min(a, b) for a, b in zip(code_count, guess_count)) - black_pegs

    return str(black_pegs) + "\n" + str(white_pegs)