def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("O")] += 1

    white_pegs = sum(
        min(count, guess.count(c)) for count, c in zip(code_count, "OOYYBB")
    )

    black_pegs = sum(1 for c in code if c == g)

    return str(black_pegs), str(white_pegs)