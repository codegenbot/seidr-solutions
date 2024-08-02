def mastermind(code, guess):
    correct_position = sum(
        c1 == c2 and p1 != p2 for c1, c2, p1, p2 in zip(code, guess, range(4), range(4))
    )
    correct_color = sum(c1 == c2 for c1, c2 in zip(code, guess)) - correct_position
    return correct_color, 4 - correct_position