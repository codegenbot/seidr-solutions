def mastermind(code, guess):
    correct_place = sum(c1 == c2 for c1, c2 in zip(code, guess))
    black_peg_count = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white_peg_count = 4 - black_peg_count - correct_place
    return str(black_peg_count), str(white_peg_count)