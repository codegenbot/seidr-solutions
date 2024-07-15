def mastermind(code, guess):
    black = 0
    white = 0
    for c, g in zip(code, guess):
        if c == g:
            black += 1
        elif g in code:
            white += 1
    return str(black) + "\n" + str(white)