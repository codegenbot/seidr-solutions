def mastermind(code, guess):
    white = 0
    black = 0
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif code[i] in guess:
            white += 1 - (guess.count(code[i]) - 1)
    return str(black) + "\n" + str(white)