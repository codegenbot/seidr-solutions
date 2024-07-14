def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    for c in set(guess):
        correct_position = code.count(c)
        correct_color = code.count(c) + guess.count(c) - correct_position
        black_pegs += min(correct_position, correct_color)
        white_pegs += max(0, correct_color - correct_position)

    return str(black_pegs) + "\n" + str(white_pegs)