def mastermind(code, guess):
    black_pegs = sum([a == b for a, b in zip(code, guess)])
    white_pegs = sum(
        [
            1 if c.count(d) and code.index(c) != code.index(d) else 0
            for c in [code[i : i + 2] for i in range(0, 4)]
            for d in set(guess)
        ]
    )
    return black_pegs, 4 - black_pegs - white_pegs