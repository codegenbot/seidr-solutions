```
def mastermind(code, guess):
    black_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white_pegs = 4 - sum(min(c1.count(c), g1.count(c)) for c in "ABCDEF")
    return str(black_pegs) + "\n" + str(white_pegs)