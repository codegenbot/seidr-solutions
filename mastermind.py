def mastermind(code, guess):
    correct_place = sum(
        c1 == c2 and i == j for i, c1 in enumerate(code) for j, c2 in enumerate(guess)
    )
    correct_color = (
        sum(c1 in c2 for c1 in code for c2 in [guess, code]) - 4 * correct_place
    )
    return str(correct_place), str(correct_color)