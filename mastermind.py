def mastermind(code, guess):
    black_pegs = sum(1 for c1, c2 in zip(guess, code) if c1 == c2)
    white_pegs = sum(min(code.count(c), guess.count(c)) - 1 for c in set(guess))
    return str(black_pegs) + "\n" + str(white_pegs)