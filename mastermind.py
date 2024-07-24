def mastermind(code, guess):
    correct_color_wrong_place = sum(c1 == c2 and i != j for i, (c1, _) in enumerate(guess) for (_, c2), (j, _))
    correct_color_correct_place = sum(i == j and c1 == c2 for i, (c1, _) in enumerate(code) for (_, c2) in enumerate(guess))
    return str(correct_color_wrong_place), str(correct_color_correct_place)