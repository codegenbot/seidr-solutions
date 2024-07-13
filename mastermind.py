def mastermind(code, guess):
    black = sum(1 for c, g in zip(code, guess) if c == g)
    wrong_color_correct_place = 4 - len(set(g for c, g in zip(code, guess) if c != g))
    white = wrong_color_correct_place
    return str(black) + ' ' + str(white)