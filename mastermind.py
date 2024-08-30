def mastermind(code, guess):
    code_set = set(code)
    white_pegs = sum(c in code_set and c != g for g in guess)
    black_pegs = sum(g == c for c, g in zip(code, guess))
    return str(white_pegs) + "\n" + str(black_pegs)