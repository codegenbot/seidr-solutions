def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return [0, 0]

    for c in code + guess:
        if c not in "ARBYG":
            return [0, 0]

    white_pegs = len(set([c for c, g in zip(code, guess) if c == g])) - sum(1 for c, g in zip(code, guess) if c == g)
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)

    return [black_pegs, white_pegs]