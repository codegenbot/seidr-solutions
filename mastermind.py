def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0

    for i in range(4):
        if guess[i] == code[i]:
            black_pegs += 1
        else:
            for j in range(4):
                if guess[j] == code[i]:
                    white_pegs += 1
                    break