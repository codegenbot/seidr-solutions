def mastermind(code, guess):
    correct_place = sum(1 for a, b in zip(code, guess) if a == b)
    correct_color = sum(min(code.count(c), guess.count(c)) for c in set(guess))
    return str(correct_place), str(4 - correct_place + correct_color)