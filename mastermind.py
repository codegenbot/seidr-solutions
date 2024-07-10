def mastermind(code, guess):
    correct_color_wrong_place = sum(c in code for c in guess) - sum(
        g == c for c in code
    )
    correct_color_correct_place = sum(
        i for i, (c, g) in enumerate(zip(guess, code)) if c == g
    )
    return str(correct_color_wrong_place) + "\n" + str(correct_color_correct_place)