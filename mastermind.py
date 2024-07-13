def mastermind(code, guess):
    correct_color_wrong_place = 0
    correct_color_correct_place = 0
    for i in range(6): 
        if i < 4 and code[i] == guess[i]:
            correct_color_correct_place += 1
        elif code.count(str(i)) > 0: 
            correct_color_wrong_place += 1
    return str(correct_color_wrong_place) + "\n" + str(correct_color_correct_place)