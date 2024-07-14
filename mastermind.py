def mastermind(code, guess):
    code = list(code)
    guess = list(guess)
    white = 0
    black = 0

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif guess[i] in code:
            white += 1

    return str(black) + "\n" + str(white)