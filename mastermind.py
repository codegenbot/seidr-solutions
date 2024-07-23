def mastermind(code, guess):
    black_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    correct_colors = len(set(code).intersection(guess))
    white_pegs = correct_colors - black_pegs
    return str(black_pegs) + "\n" + str(white_pegs)