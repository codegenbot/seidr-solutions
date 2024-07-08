def mastermind(code, guess):
    black = 0
    white = 0
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            code_count = str(code).count(str(guess[i]))
            white += min(code_count, 1)
    return black, white