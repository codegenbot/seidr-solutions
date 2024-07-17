def mastermind(code, guess):
    correct_color_wrong_place = 0
    correct_color_correct_place = 0
    code_list = [char for char in code]
    guess_list = [char for char in guess]

    for i in range(4):
        if code_list[i] == guess_list[i]:
            correct_color_correct_place += 1
        elif code_list.count(guess_list[i]) > 0:
            correct_color_wrong_place += 1

    return str(correct_color_wrong_place), str(correct_color_correct_place)