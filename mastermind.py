def mastermind(code, guess):
    code_set = set(code)
    white_pegs = sum(1 for c in guess if c in code_set and c != code[code.index(c)])
    black_pegs = sum(1 for i, c in enumerate(guess) if c == code[i])
    return str(white_pegs) + "\n" + str(black_pegs)