def mastermind(code, guess):
    white = 0
    black = 0
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif str(guess[i]) not in code[:i]+code[i+1:]:
            white += 1
    return black, white