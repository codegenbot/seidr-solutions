def mastermind(code, guess):
    white_pegs = sum(a == b for a, b in zip(code, guess)) - sum(
        i == j for i, j in zip(code, guess)
    )
    black_pegs = sum(i == j for i, j in zip(code, guess))
    return str(black_pegs) + "\n" + str(white_pegs)