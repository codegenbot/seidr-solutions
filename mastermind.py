def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_counts = [0]*6
    guess_counts = [0]*6

    for c1, c2 in zip(code, guess):
        if c1 == c2:
            black_pegs += 1
        else:
            code_counts[code.index(c1)] += 1
            guess_counts[guess.index(c2)] += 1

    white_pegs = sum([min(code_counts[i], 4 - guess_counts[i]) for i in range(6)]) - black_pegs

    return str(black_pegs) + "\n" + str(white_pegs)