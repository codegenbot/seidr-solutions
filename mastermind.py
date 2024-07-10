Here is the solution:

def mastermind(code, guess):
    code_set = set(code)
    correct_colors = sum(1 for c in guess if c in code_set)
    black_pegs = 0
    white_pegs = 0
    for i in range(4):
        if guess[i] == code[i]:
            black_pegs += 1
        elif guess[i] in code:
            white_pegs += 1
    return str(black_pegs) + '\n' + str(white_pegs)