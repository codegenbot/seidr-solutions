def mastermind(code, guess):
    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)
    white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(guess))
    return str(black_pegs) + "\n" + str(white_pegs)