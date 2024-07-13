def mastermind(code, guess):
    black_pegs = 0
    white_correct_colors = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif str(code[i]) in str(guess):
            white_correct_colors += 1

    return str(black_pegs) + "\n" + str(white_correct_colors)