def mastermind(code, guess):
    black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
    correct_colors_in_code = len(set(code))
    correct_colors_in_guess = len(set(guess))
    white_pegs = correct_colors_in_code - black_pegs + correct_colors_in_guess
    return str(black_pegs) + "\n" + str(white_pegs)