def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    white_pegs = sum(
        min(count, count_guess)
        for count, count_guess in zip(code_count, [guess.count(c) for c in guess])
    )

    black_pegs = sum(
        (code == g).sum() for g in itertools.permutations(guess, len(guess))
    )

    return str(black_pegs) + "\n" + str(4 - black_pegs)