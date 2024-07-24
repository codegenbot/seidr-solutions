def mastermind(code, guess):
    correct_positions = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white_peg_count = 4 - correct_positions
    return f"{white_peg_count}\n{correct_positions}"