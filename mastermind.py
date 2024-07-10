def mastermind(code, guess):
    correct_colors = sum(a == b for a, b in zip(code, guess))
    correct_places = sum(1 for i, (a, b) in enumerate(zip(code, guess)) if a == b)
    return str(correct_places), str(4 - correct_colors + correct_places)