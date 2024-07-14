def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return str(0) + "\n" + str(0)

    for c in code + guess:
        if c not in "ARBYG":
            return str(0) + "\n" + str(0)

    white_pegs = sum(
        min(code.count(c), guess.count(c)) - (c in code[:guess.find(c)] if c in code else 0)
        for c in set(guess)
    )
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g and code.index(c) == guess.index(g))

    return str(black_pegs) + "\n" + str(white_pegs)