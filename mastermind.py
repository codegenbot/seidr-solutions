def mastermind(code, guess):
    correct_place = sum(c1 == c2 for c1, c2 in zip(code, guess))
    correct_color = sum(1 for a, b in zip(code, guess) if a == b)
    return str(correct_place), str(correct_color)