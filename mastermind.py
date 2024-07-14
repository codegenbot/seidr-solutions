def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_set = set(code)
    for i in range(4):
        if guess[i] == code[i]:
            black_pegs += 1
        elif guess[i] in code_set:
            white_pegs += 1
    return str(black_pegs) + "\n" + str(white_pegs)