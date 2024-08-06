def mastermind(code, guess):
    code_set = set(code)
    white_pegs = 0
    black_pegs = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code[i] in guess:
            white_pegs += 1

    return str(black_pegs) + "\n" + str(white_pegs)