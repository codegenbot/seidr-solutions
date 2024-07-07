def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 1
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif guess.index(code[i]) != -1:
            white_pegs += 1
    return white_pegs + black_pegs