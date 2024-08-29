def mastermind(code, guess):
    correct_color_wrong_place = 0
    correct_color_correct_place = 0

    for i in range(4):
        if code[i] == guess[i]:
            correct_color_correct_place += 1
        elif str(guess[i]) in code:
            correct_color_wrong_place += 1

    return str(correct_color_wrong_place) + "\n" + str(correct_color_correct_place)