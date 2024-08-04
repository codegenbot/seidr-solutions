def mastermind(code, guess):
    correct_places = sum(c1 == c2 for c1, c2 in zip(code, guess))
    correct_colors = sum(1 for c in code if c in guess) - correct_places
    return str(correct_colors), str(4 - correct_places)