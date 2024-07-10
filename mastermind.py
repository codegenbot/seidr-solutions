def mastermind(code, guess):
    white = 0
    black = 0
    for i in range(len(guess)):
        if guess[i] == code[i]:
            black += 1
        elif guess.count(code[i]) > 0:
            white += 1
    return str(black) + "\n" + str(white)