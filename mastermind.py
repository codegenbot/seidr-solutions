def mastermind(code, guess):
    correct_place = sum(
        c1 == c2 and i1 == i2
        for i1, c1 in enumerate(code)
        for i2, c2 in enumerate(guess)
    )
    correct_color = sum(c1 in c2 for c1 in code for c2 in [guess])
    return str(correct_place), str(
        len(set(guess)) - len(set(guess.replace(c, "")) for c in set(guess)).get(4, 0)
    )