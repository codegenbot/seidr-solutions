def get_peg_count(code, guess):
    correct_positions = sum(a == b for a, b in zip(code, guess))
    correct_colors = sum(1 for a in code for b in guess if a == b)

    return str(correct_colors), str(4 - correct_positions + correct_colors)