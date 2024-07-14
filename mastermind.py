def mastermind(code, guess):
    white = 0
    black = 0

    for i in range(4):
        if list(guess)[i] == list(code)[i]:
            black += 1
        elif str(list(code).count(str(list(guess)[i]))):
            white += 1

    return str(black) + "\n" + str(white)