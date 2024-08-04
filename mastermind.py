def mastermind(code, guess):
    correct_colors = 0
    correct_places = 0
    for i in range(4):
        if code[i] == guess[i]:
            correct_places += 1
        elif code[i] in guess[i : i + 1]:
            correct_colors += 1
    return correct_colors, correct_places