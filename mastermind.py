def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif guess[i] in code and code.index(guess[i]) != i:
            white_pegs += 1
    return str(white_pegs) + ' ' + str(black_pegs)