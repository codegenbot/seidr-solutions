def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    for i in range(6):  
        if code[i] == guess[i]:
            black_pegs += 1
        elif str(i) in code and str(i) in guess:
            white_pegs += 1

    return str(black_pegs) + "\n" + str(white_pegs)