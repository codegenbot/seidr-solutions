def mastermind(code, guess):
    correct_colors = sum(c1 == c2 for c1, c2 in zip(code, guess))
    correct_places = sum((c1, c2) in zip(code, guess) for c1, c2 in zip(guess, code))
    return 4 - correct_places, correct_colors - correct_places