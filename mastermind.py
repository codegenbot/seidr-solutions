def mastermind(code, guess):
    correct_color = sum(c1 == c2 for c1, c2 in zip(code, guess))
    correct_place = sum(
        (c1 == c2) and (i1 != i2)
        for ((i1, c1), (i2, c2)) in enumerate(zip(code, guess))
    )
    return str(correct_place) + "\n" + str(4 - correct_color + correct_place)