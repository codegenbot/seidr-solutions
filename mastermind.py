def mastermind(code, guess):
    black = 0
    white = 0
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif guess_count.get(guess[i], 0) < code_count.get(code[i], 0):
            white += 1

    return str(black) + "\n" + str(white)