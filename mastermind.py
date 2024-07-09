Here is a possible solution:

def mastermind(code, guess):
    white_pegs = sum(1 for a, b in zip(guess, code) if a == b)
    black_pegs = len([a for a, b in zip(guess, code) if a == b and guess.index(a) == code.index(b)])
    return str(black_pegs) + "\n" + str(4 - black_pegs)