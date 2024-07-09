def mastermind(code, guess):
    white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(guess))
    black_pegs = sum(1 for c in guess if guess.index(c) == code.index(c))
    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)