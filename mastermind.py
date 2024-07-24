def mastermind(code, guess):
    black_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white_pegs = sum(
        min(
            map(lambda x: 0 if x == c else 1, code).count(c),
            map(lambda x: 0 if x == c else 1, guess).count(c),
        )
        for c in set(guess)
    )
    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)