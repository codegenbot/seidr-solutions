def mastermind(code, guess):
    black_pegs = 0
    white_pegs_correct_color = 0
    white_pegs = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif str(code[i]) in str(guess):
            if code.index(str(code[i])) == guess.index(str(guess[i])):
                black_pegs += 1
            else:
                white_pegs_correct_color += 1

    return str(black_pegs) + "\n" + str(white_pegs_correct_color)