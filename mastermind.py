def mastermind(code, guess):
    code_set = set(code)
    guess_set = set(guess)

    black_pegs = sum(1 for c in guess if c == code[i] and i < 4)
    white_pegs = 4 - black_pegs

    return str(black_pegs) + "\n" + str(white_pegs)