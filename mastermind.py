def mastermind(code, guess):
    correct_position = 0
    correct_color_wrong_position = 0

    for i in range(4):
        if code[i] == guess[i]:
            correct_position += 1
        elif str(guess[i]).count(str(code[i])) > 0:
            correct_color_wrong_position += 1

    return correct_position, correct_color_wrong_position