def mastermind(code, guess):
    correct_positions = sum([a == b for a, b in zip(code, guess)])
    correct_colors = sum(
        [a in b for a in code for b in [guess, code]].count(a) - correct_positions
    )
    return str(correct_positions), str(correct_colors)