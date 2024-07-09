def mastermind(code, guess):
    black_pegs = 0
    correct_colors = []

    for i in range(4):
        if guess[i] == code[i]:
            black_pegs += 1
        elif code[i] not in correct_colors and code[i] in set(guess):
            correct_colors.append(code[i])
    
    white_pegs = len(correct_colors)
    return str(black_pegs) + "\n" + str(white_pegs)