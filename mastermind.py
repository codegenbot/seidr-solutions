def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_count = {}
    guess_count = {}

    for c in code:
        if c not in code_count:
            code_count[c] = 1
        else:
            code_count[c] += 1

    for g, c in zip(guess, code):
        if g == c:
            black_pegs += 1
        elif code_count.get(g, 0) > 0:
            white_pegs += 1
            code_count[g] -= 1

    return str(black_pegs) + "\n" + str(4 - black_pegs)