def mastermind(code, guess):
    code_set = set(code)
    white_pegs = 0
    black_pegs = 0

    for char in guess:
        if char in code and char != code[0]:
            white_pegs += 1
        elif char == code[0]:
            black_pegs += 1

    return str(white_pegs) + "\n" + str(black_pegs)