def mastermind(code, guess):
    black_pegs = sum(
        a == b and c == d for a, c in zip(code, guess) for b, d in zip(code, guess)
    )
    white_pegs = 4 - black_pegs
    return str(white_pegs), str(black_pegs)