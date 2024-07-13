def mastermind(code, guess):
    correct_positions = sum(c1 == c2 for c1, c2 in zip(code, guess))
    correct_colors = sum(min(c1.count(c) for c1 in (code, guess)) for c in set(guess))
    return str(correct_positions), str(4 - correct_positions + correct_colors)