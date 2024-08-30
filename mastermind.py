def get_clue(code, guess):
    black = 0
    white = 0
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif str(guess[i]) in code:
            white += 1
    return int(black), int(white)