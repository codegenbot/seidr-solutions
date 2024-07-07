def mastermind(code, guess):
    black_peg = 0
    white_peg = (
        4
        - sum(c1 == c2 for c1, c2 in zip(code, guess))
        - (sum(1 for c1, c2 in zip(code, guess) if c1 == c2))
    )
    return str(white_peg) + "\n" + str(black_peg)