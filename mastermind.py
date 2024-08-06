def mastermind(code, guess):
    correct_place = sum(c1 == c2 for c1, c2 in zip(code, guess))
    correct_color = sum(min(code.count(c), guess.count(c)) for c in set(guess))
    return str(correct_place), str(4 - correct_place + correct_color)