def mastermind(code, guess):
    code_count = {}
    guess_count = {}

    for c in code:
        if c not in code_count:
            code_count[c] = 1
        else:
            code_count[c] += 1

    for c in guess:
        if c not in guess_count:
            guess_count[c] = 1
        else:
            guess_count[c] += 1

    black_pegs = sum(
        min(count, code_count.get(c, 0)) for c, count in guess_count.items()
    )
    white_pegs = len(guess) - black_pegs

    return str(black_pegs) + "\n" + str(white_pegs)