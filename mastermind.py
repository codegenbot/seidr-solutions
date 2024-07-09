def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0

    for i in range(4):
        if guess[i] == code[i]:
            black_pegs += 1
        else:
            found = False
            for j in range(4):
                if guess[j] == code[i] and not found:
                    white_pegs += 1
                    found = True

    return str(black_pegs) + "\n" + str(white_pegs)