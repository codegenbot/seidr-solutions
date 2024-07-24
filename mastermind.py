def mastermind(code, guess):
    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)
    white_pegs = sum(
        min(code_count, guess.count(c))
        for code_count, c in zip([code.count(c) for c in "ABCDEF"], "ABCDEF")
    )
    return str(black_pegs) + "\n" + str(4 - black_pegs)