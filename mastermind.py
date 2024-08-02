def mastermind(code, guess):
    code_set = set(code)
    guess_set = set(guess)

    white_pegs = len(code_set & guess_set) - sum(
        c1 == c2 for c1, c2 in zip(code, guess)
    )
    black_pegs = sum(1 for i, (c1, c2) in enumerate(zip(code, guess)) if c1 == c2)

    return str(white_pegs) + "\n" + str(black_pegs)