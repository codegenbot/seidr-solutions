def mastermind(code, guess):
    correct_colors = 0
    correct_positions = 0
    code_list = [char for char in code]
    guess_list = [char for char in guess]

    for i in range(4):
        if code_list[i] == guess_list[i]:
            correct_positions += 1
        elif guess_list.count(code_list[i]) > 0:
            correct_colors += 1

    return str(correct_colors) + "\n" + str(correct_positions)