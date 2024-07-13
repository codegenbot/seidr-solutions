def mastermind(code, guess):
    black_pegs = 0
    white_pegs_correct_color = 0
    white_pegs = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif str(code[i]) in str(guess):
            if code[i] == guess[ord(str(guess).find(str(code[i])))-48]:
                white_pegs_correct_color += 1
            else:
                white_pegs += 1

    return str(black_pegs) + "\n" + str(white_pegs_correct_color)