def mastermind(code, guess):
    correct_color_wrong_place = sum(
        [1 for (c, g) in zip(code, guess) if c == g and c != g[0]]
    )
    correct_color_correct_place = sum([1 for (c, g) in zip(code, guess) if c == g])
    return str(correct_color_wrong_place), str(correct_color_correct_place)