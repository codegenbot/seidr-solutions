def mastermind(code, guess):
    correct_place = sum(c1 == c2 for c1, c2 in zip(code, guess))
    black_peg_count = sum(c1 == c2 for c1, c2 in zip(code, guess))
    return str(correct_place), str(black_peg_count)