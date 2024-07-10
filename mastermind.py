def mastermind(code, guess):
    correct_place = 0
    correct_color_wrong_place = 0
    for i in range(4):
        if code[i] == guess[i]:
            correct_place += 1
        elif str(code[i]) in str(guess):
            correct_color_wrong_place += 1
    return correct_place, correct_color_wrong_place