def mastermind(code, guess):
    correct_color_wrong_place = sum(1 for a, b in zip(guess, code) if a == b)
    correct_color_correct_place = 0
    for i in range(4):
        if code[i] == guess[i]:
            correct_color_correct_place += 1
    return str(correct_color_wrong_place - correct_color_correct_place) + "\n" + str(correct_color_correct_place)