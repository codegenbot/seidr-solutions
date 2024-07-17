def mastermind(code, guess):
    white_peg = sum(c in code and c != g for c, g in zip(guess, code))
    black_peg = sum(c1 == c2 for c1, c2 in zip(code, guess)) - white_peg
    return str(black_peg) + "\n" + str(white_peg)