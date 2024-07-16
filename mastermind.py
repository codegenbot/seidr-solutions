def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - 65] += 1

    white_pegs = sum(
        min(count, guess.count(c)) for count, c in zip(code_count, "ABCDEF")
    )

    black_pegs = sum(1 for i, j in zip(guess, code) if i == j)

    return str(black_pegs) + "\n" + str(4 - black_pegs + white_pegs)