def mastermind(code, guess):
    correct_place = sum(1 for a, b in zip(code, guess) if a == b)
    correct_color = sum(
        min(c.count(b), g.count(b)) for c, g in (zip(code, guess), zip(guess, code))
    )
    return str(correct_place), str(4 - correct_place + correct_color)