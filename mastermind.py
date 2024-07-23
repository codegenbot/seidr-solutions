def mastermind(code, guess):
    black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white_pegs = len(
        [
            c1
            for c1, c2 in zip(code, guess)
            if c1 == c2 and c1 not in [c3 for c3, c4 in zip(guess, code) if c3 == c1]
        ]
    )
    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)