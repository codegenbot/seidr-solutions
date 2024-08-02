def mastermind(code, guess):
    code_set = set(code)
    guess_set = set(guess)

    white_pegs = len(code_set & guess_set) - sum(
        c1 == c2 for c1, c2 in zip(code, guess)
    )
    black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))

    return str(black_pegs), str(white_pegs)