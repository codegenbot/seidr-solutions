def mastermind(code, guess):
    correct_colors = 0
    correct_positions = 0

    for i in range(4):
        if code[i] == guess[i]:
            correct_positions += 1
        elif str(guess[i]) in str(code):
            correct_colors += 1

    return str(correct_colors) + "\n" + str(correct_positions)