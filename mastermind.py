def mastermind(code, guess):
    black_peg = 0
    white_peg = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
            guess = str(guess[:i]) + str(guess[i+1:])
        elif str(guess[i]) in str(code):
            white_peg += 1
            guess = str(guess[:i]) + str(guess[i+1:])

    return str(black_peg), str(white_peg)