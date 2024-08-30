def get_clue(code, guess):
    black = 0
    white = 0
    for c in code:
        if c == guess[0]:
            white += 1
        elif c in str(guess):
            white -= 1
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
    return str(black), str(white)