def mastermind(code, guess):
    correct_place = sum(c1 == c2 for c1, c2 in zip(code, guess))
    correct_color = sum(c in guess for c in code) - correct_place
    return str(correct_color), str(correct_place)