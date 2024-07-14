def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return str(0) + "\n" + str(0)

    for c in code + guess:
        if c not in "ARBYG":
            return str(0) + "\n" + str(0)

    white_pegs = sum(code.count(c) for c in set(guess) & set(code))
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)

    return str(black_pegs) + "\n" + str(white_pegs)