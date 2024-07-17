Here is the solution:

def mastermind(code, guess):
    correct_positions = sum(c1 == c2 and i1 == i2 for ((i1, c1), (i2, c2)) in zip(enumerate(code), enumerate(guess)))
    correct_colors = sum(c1 in c2 for c1 in code for c2 in [guess])
    return str(correct_positions), str(4 - correct_positions)