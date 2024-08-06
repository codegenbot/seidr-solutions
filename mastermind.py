def mastermind(code, guess):
    correct_place = sum(c1 == c2 for c1, c2 in zip(code, guess))
    correct_color = sum(min(c1.count(c), code.count(c)) for c in set(guess))
    return str(correct_place) + "\n" + str(4 - correct_place + correct_color)