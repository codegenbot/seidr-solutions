def mastermind(code, guess):
    black_pegs = sum(
        c1 == c2 and p1 != p2
        for c1, c2 in zip(code, guess)
        for p1, p2 in [(0, 1), (1, 0)]
    )
    white_pegs = len(
        [c1 for c1, c2 in zip(code, guess) if c1 == c2]
        - [
            c1
            for c1, c2 in zip(code, guess)
            if c1 == c2 and p1 != p2
            for p1, p2 in [(0, 1), (1, 0)]
        ]
    )
    return str(white_pegs) + "\n" + str(black_pegs)