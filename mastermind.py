def mastermind(code, guess):
    white_pegs = sum(c in code and c != g for c, g in zip(guess, "RRRR"))
    black_pegs = sum(c == g for c, g in zip(guess, code))
    return str(white_pegs) + "\n" + str(black_pegs)