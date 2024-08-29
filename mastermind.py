def mastermind(code, guess):
    code_set = set(code)
    white_pegs = 0
    black_pegs = 0
    for i in range(4):
        if guess[i] == code[i]:
            black_pegs += 1
        elif guess[i] in code_set:
            white_pegs += 1
    return str(black_pegs) + "\n" + str(white_pegs)