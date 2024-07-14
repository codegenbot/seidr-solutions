def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    for c in set(guess):
        black_pegs += min(code.count(c), guess.count(c))
        white_pegs += abs(min(code.count(c), guess.count(c)) - 4)

    return str(black_pegs) + "\n" + str(white_pegs)