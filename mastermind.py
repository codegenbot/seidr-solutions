def mastermind(code, guess):
    black_pegs = sum(1 for i, c in enumerate(guess) if c == code[i])
    white_pegs = 4 - black_pegs
    return str(black_pegs) + "\n" + str(white_pegs)