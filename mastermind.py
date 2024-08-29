def mastermind(code, guess):
    white = sum(c1 == c2 for c1, c2 in zip(code, guess)) - sum(
        i == j for i, j in zip(code, guess)
    )
    black = sum(i == j for i, j in zip(code, guess))
    return str(black), str(white)