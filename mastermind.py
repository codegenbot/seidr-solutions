def mastermind(code, guess):
    black_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white_pegs = sum(min(map(lambda x: 0 if y == x else 1, code), map(lambda x: [x], guess))).count(1)
    return str(black_pegs) + "\n" + str(white_pegs)