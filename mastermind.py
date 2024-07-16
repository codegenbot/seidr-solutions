def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif guess.count(guess[i]) > 0:
            white_pegs += 1

    return str(black_pegs) + "\n" + str(4 - black_pegs)