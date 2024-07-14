def mastermind(code, guess):
    black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white_pegs = len([c for c in code if c in guess and c != next((x for x in code if x==c), None)])
    return str(black_pegs) + "\n" + str(4 - black_pegs)