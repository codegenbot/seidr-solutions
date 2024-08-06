def mastermind(code, guess):
    code_set = set(code)
    white_pegs = sum(c in code_set and c != g for c, g in zip(code, guess))
    black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
    return str(white_pegs) + "\n" + str(black_pegs)