def mastermind(code, guess):
    correct_place = sum(
        c1 == c2 and i1 == i2
        for ((i1, c1), (i2, c2)) in zip(enumerate(code), enumerate(guess))
    )
    correct_color = sum(c1 in c2 for c1, c2 in zip(guess, itertools.groupby(code)))
    return str(correct_place) + "\n" + str(len(code) - correct_place)