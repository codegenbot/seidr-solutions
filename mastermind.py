def mastermind(code, guess):
    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)

    white_pegs = 0
    for c in "ABCDEF":
        white_pegs += min(code.count(c), guess.count(c))

    return str(black_pegs) + "\n" + str(white_pegs)