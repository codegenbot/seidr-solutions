Here is the solution:

def mastermind(code, guess):
    correct_positions = sum(a == b for a, b in zip(code, guess))
    correct_colors = sum(c1.count(c2) for c1, c2 in [(code, guess), (guess, code)])
    return str(correct_positions), str(4 - correct_positions)