Here is the solution:

def mastermind(code, guess):
    black_pegs = sum(c1 == c2 and i1 == i2 for ((i1, c1), (i2, c2)) in zip(enumerate(code), enumerate(guess)))
    white_pegs = len([c1 for c1, c2 in zip(code, guess) if c1 == c2])
    return str(black_pegs) + '\n' + str(len(code) - black_pegs - white_pegs)