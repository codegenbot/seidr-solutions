def mastermind(code, guess):
    code = list(code)
    white = 0
    black = 0
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
            code[i] = "x"
            guess[i] = "x"
        elif guess[i] in code:
            white += 1
            code[code.index(guess[i])] = "x"
    return str(black) + "\n" + str(white)