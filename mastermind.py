def mastermind(code, guess):
    correct_colors = [c1 == c2 for c1, c2 in zip(code, guess)]
    correct_places = [
        c1 == c2 and i1 == i2 for i1, i2, c1, c2 in zip(range(4), range(4), code, guess)
    ]
    return sum(correct_places), sum(correct_colors) - sum(correct_places)