def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6
    black_pegs = sum(c == g for c, g in zip(code, guess))
    white_pegs = sum(min(a, b) for a, b in zip(code_count, guess_count))

    return str(white_pegs) + "\n" + str(black_pegs)