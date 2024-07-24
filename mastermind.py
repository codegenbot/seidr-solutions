def mastermind(code, guess):
    black = 0
    white = 0
    for i, c in enumerate(code):
        if c == guess[i]:
            black += 1
        elif c in guess:
            white += 1
    return str(black) + "\n" + str(white)