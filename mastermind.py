def mastermind(code, guess):
    white = 0
    black = 0
    for i in range(4):
        if list(guess)[i] == list(code)[i]:
            black += 1
        elif list(guess).count(list(code)[i]) > 0:
            white += 1
    return str(black) + "\n" + str(white)