def mastermind(code, guess):
    correct_place = sum(c1 == c2 for c1, c2 in zip(code, guess))
    black_peg_count = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white_peg_count = len(guess) - black_peg_count
    return str(white_peg_count), str(black_peg_count)