def mastermind(code, guess):
    black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white_pegs = sum(
        min(code.count(c), (c != c2 for c2 in guess).count(c)) for c in set(guess)
    )
    return str(white_pegs) + "\n" + str(black_pegs)