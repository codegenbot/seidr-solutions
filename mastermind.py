def mastermind(code, guess):
    code_set = set(code)
    white_pegs = sum(c in code_set and c != g for c, g in zip(guess, code))
    black_pegs = sum(1 for c, g in zip(guess, code) if c == g)
    return str(black_pegs) + "\n" + str(white_pegs)