def mastermind(code, guess):
    black = 0
    white = 0
    for i in range(4):
        if guess[i] == code[i]:
            black += 1
        elif guess[i] in code:
            white += 1
    return str(white) + "\n" + str(black)