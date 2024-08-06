def mastermind(code, guess):
    correct_position = 0
    correct_color = 0

    for i in range(4):
        if code[i] == guess[i]:
            correct_position += 1
        elif str(guess[i]) in str(code):
            correct_color += 1

    return str(correct_position) + "\n" + str(correct_color)