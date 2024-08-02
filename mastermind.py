def get_clue(code, guess):
    white = 0
    black = 0
    for i in range(4):
        c = code[i]
        g = guess[i]
        if c == g:
            black += 1
        elif c in g:
            white += 1
    return str(black) + "\n" + str(white)