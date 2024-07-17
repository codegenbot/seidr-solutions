def mastermind(code, guess):
    count_black = sum(
        c1 == c2 and i1 == i2
        for ((i1, c1), (i2, c2)) in zip(enumerate(guess), enumerate(code))
    )
    count_white = sum(c1 == c2 for c1, c2 in zip(guess, code)) - count_black
    return str(count_black) + "\n" + str(count_white)