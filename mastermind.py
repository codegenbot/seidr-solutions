def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 4 - sum(1 for a, b in zip(guess, code) if a == b)
    return black_pegs, white_pegs