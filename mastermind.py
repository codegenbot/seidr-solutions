def mastermind(code, guess):
    white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(guess))
    black_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    return white_pegs, black_pegs