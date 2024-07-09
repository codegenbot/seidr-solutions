def mastermind(code, guess):
    white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(guess) if code.count(c) > 0)
    black_pegs = sum(1 for i, c in enumerate(guess) if c == code[i])
    return str(black_pegs) + "\n" + str(4 - black_pegs)