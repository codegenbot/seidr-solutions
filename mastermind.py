def mastermind(code, guess):
    correct_count = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white_pegs = 4 - correct_count
    return str(white_pegs) + "\n" + str(correct_count)