def mastermind(code, guess):
    white = 0
    black = 0
    for i in range(4):
        if list(guess)[i] == list(code)[i]:
            black += 1
        elif str(list(guess)[i]) in [str(x) for x in list(code)]:
            white += 1
    return str(black), str(white)