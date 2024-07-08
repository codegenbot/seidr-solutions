def mastermind(code, guess):
    black_pegs = sum(min(code.count(c), guess.count(c)) for c in set(guess))
    white_pegs = 4 - black_pegs
    return str(white_pegs) + "\n" + str(black_pegs)