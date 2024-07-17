def mastermind(code, guess):
    correct_place = sum(1 for a, b in zip(guess, code) if a == b)
    correct_color = (
        sum(min(map(a.count, "BOYOW")) for a in [code, guess]) - 4 * correct_place
    )
    return str(correct_place), str(correct_color)