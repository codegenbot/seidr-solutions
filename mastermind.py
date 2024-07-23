```
def mastermind(code, guess):
    black_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white_pegs = 4 - black_pegs - len([c for c in code if c not in guess])
    return str(black_pegs) + "\n" + str(len([c for c in code if c not in guess]))