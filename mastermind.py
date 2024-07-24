def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    code_counts = {}
    guess_counts = {}

    for c1, c2 in zip(code, guess):
        if c1 == c2:
            black_pegs += 1
        else:
            code_counts[c1] = code_counts.get(c1, 0) + 1
            guess_counts[c2] = guess_counts.get(c2, 0) + 1

    for c in "ABCDEF":
        white_pegs += min(code_counts.get(c, 0), guess_counts.get(c, 0))

    return str(black_pegs) + "\n" + str(white_pegs)