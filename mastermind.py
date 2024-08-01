def mastermind(code, guess):
    correct_place = sum([1 if c1 == c2 else 0 for c1, c2 in zip(code, guess)])
    correct_color = sum([min(1, code.count(c)) for c in set(guess)])

    return str(correct_place), str(correct_color)