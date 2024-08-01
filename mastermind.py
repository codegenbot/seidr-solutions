def mastermind(code, guess):
    correct = sum(c1 == c2 for c1, c2 in zip(code, guess))
    wrong_place = sum(min(code.count(c), guess.count(c)) for c in set(guess))
    return str(wrong_place) + "\n" + str(4 - wrong_place)