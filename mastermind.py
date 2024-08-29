def mastermind(code, guess):
    correct_place = sum(
        c1 == c2 and i1 == i2
        for i1, c1 in enumerate(guess)
        for i2, c2 in enumerate(code)
    )
    correct_color = sum(1 for c1, c2 in zip(guess, code) if c1 == c2)
    return str(correct_place), str(4 - correct_color + correct_place)