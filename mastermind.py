def mastermind(code, guess):
    black_pegs = sum((c1 == c2 and 1 or 0) for c1, c2 in zip(code, guess))
    white_pegs = sum(min(count, guess.count(c)) for count, c in zip([code.count(c) for c in code], code))
    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)