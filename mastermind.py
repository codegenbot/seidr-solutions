def mastermind(code, guess):
    black = 0
    white = 0
    for c, g in zip(code, guess):
        if c == g:
            black += 1
        elif code.count(g) > 0:
            white += 1
    return str(black) + ' ' + str(white)