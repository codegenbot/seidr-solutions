def mastermind(code, guess):
    correct_places = sum(
        c1 == c2 and p1 == p2 for c1, c2, p1, p2 in zip(code, guess, range(4), range(4))
    )
    correct_colors = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    return correct_colors - correct_places, correct_places