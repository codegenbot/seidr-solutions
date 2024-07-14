def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return str(0) + "\n" + str(0)

    for c in code + guess:
        if c not in "ARBYG":
            return str(0) + "\n" + str(0)

    white_pegs = 0
    black_pegs = 0

    for c, g in zip(code, guess):
        if c == g:
            if code.index(c) == guess.index(g):
                black_pegs += 1
            else:
                white_pegs += 1

    return str(black_pegs) + "\n" + str(white_pegs)