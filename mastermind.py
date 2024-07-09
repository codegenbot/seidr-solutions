def mastermind(code, guess):
    black_pegs = sum(1 for i, c in enumerate(guess) if c == code[i])
    white_pegs = len([c for c in guess if c in code]) - black_pegs
    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)