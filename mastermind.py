def mastermind(code, guess):
    correct_place = sum(c1 == c2 for c1, c2 in zip(code, guess))
    correct_color = sum(1 for c in code if c in guess)
    return str(correct_place), str(4 - correct_place + correct_color)