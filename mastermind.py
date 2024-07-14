def mastermind(code, guess):
    white = 0
    black = 0
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif guess.count(guess[i]) > code.count(code[i]):
            continue
        else:
            white += 1
    return str(black) + "\n" + str(white)