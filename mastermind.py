def mastermind(code, guess):
    black_pegs = 0
    white_pegs_color = 0
    white_pegs_position = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif str(code[i]) in str(guess) and code.index(str(code[i])) != guess.index(str(guess)[i]):
            white_pegs_color += 1
        elif str(code[i]) == str(guess)[i]:
            white_pegs_position += 1

    return str(black_pegs) + "\n" + str(white_pegs_position) + "\n" + str(white_pegs_color)