def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return "{}\n{}".format("0", "0")

    for c in code + guess:
        if c not in "ARBYG":
            return "{}\n{}".format("0", "0")

    white_pegs = len(code) - sum(1 for c, g in zip(code, guess) if c == g)
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)

    return "{}\n{}".format(str(black_pegs), str(white_pegs))