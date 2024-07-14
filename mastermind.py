def mastermind(code, guess):
    white = sum(c1 == c2 for c1, c2 in zip(guess, code)) - sum(
        i == j for i, j in zip(guess, code)
    )
    black = sum(1 for a, b in zip(guess, code) if a == b)
    return str(black), str(white)