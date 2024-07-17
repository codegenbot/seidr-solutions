def mastermind(code, guess):
    white = 0
    black = 0
    for i in range(len(code)):
        if code[i] == guess[i]:
            black += 1
        elif str(guess[i]) in code:
            white += 1
    return black, white